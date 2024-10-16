#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPainter>
#include <QScreen>
#include <QInputDialog>
#include <QMessageBox>
#include <QString>
#include <QLineEdit>
#include <QTimer>
#include <QEventLoop>
#include <vector>
#include <cstdlib>
#include <ctime>

#include <fstream>
#include <iostream>
#include <vector>

struct Vector {
    int x = 0;
    int y = 0;
};

struct Person {
    const int32_t VITALITY_MAX = 150;
    const int32_t VITALITY_MIN = 50;
    const int32_t ARMOR_MAX = 50;
    const int32_t ARMOR_MIN = 0;
    const int32_t DAMAGE_MIN = 0;
    const int32_t DAMAGE_MAX = 30;

    int32_t armor = 0;
    int32_t health = 0;
    int32_t damage = 0;
    QString name = "";

    void reset_data_to_zero() { armor = 0; health = 0; damage = 0; name = ""; }

    bool check_data() {
        return (health >= VITALITY_MIN && health <= VITALITY_MAX &&
                armor >= ARMOR_MIN && armor <= ARMOR_MAX &&
                    damage >= DAMAGE_MIN && damage <= DAMAGE_MAX &&
                !name.isEmpty());
    }

    bool is_dead() const { return health == 0; }

    void display(QTextEdit* console) const {
        console->append(name + ":");
        console->append("\thealth = " + QString::number(health));
        console->append("\tarmor = " + QString::number(armor));
        console->append("\tdamage = " + QString::number(damage));
    }

    void write_data(QWidget* parent) {
        bool ok;
        name = QInputDialog::getText(parent, "Input", "name:", QLineEdit::Normal, "", &ok);
        if (!ok || name.isEmpty()) return;

        health = QInputDialog::getInt(parent, "Input", "health [" + QString::number(VITALITY_MIN) + "," + QString::number(VITALITY_MAX) + "]:",
                                      0, VITALITY_MIN, VITALITY_MAX, 1, &ok);
        if (!ok) return;

        armor = QInputDialog::getInt(parent, "Input", "armor [" + QString::number(ARMOR_MIN) + "," + QString::number(ARMOR_MAX) + "]:",
                                     0, ARMOR_MIN, ARMOR_MAX, 1, &ok);
        if (!ok) return;

        damage = QInputDialog::getInt(parent, "Input", "damage [" + QString::number(DAMAGE_MIN) + "," + QString::number(DAMAGE_MAX) + "]:",
                                      0, DAMAGE_MIN, DAMAGE_MAX, 1, &ok);
        if (!ok) return;

        if (!check_data()) {
            QMessageBox::warning(parent, "Error", "Invalid data. Try again.");
            write_data(parent);  // Повторный ввод данных
        }
    }
};

struct Move {
    Vector current{0,0};
    Vector next{0, 0};
    Vector LIMIT{10,10};

    void right() {
        next.x = std::min(current.x + 1, LIMIT.x - 1);
        next.y = current.y;
    }

    void left() {
        next.x = std::max(current.x - 1, 0);
        next.y = current.y;
    }

    void up() {
        next.x = current.x;
        next.y = std::max(current.y - 1, 0);
    }

    void down() {
        next.x = current.x;
        next.y = std::min(current.y + 1, LIMIT.y-1);
    }

    void update_position() {
        current.x  = next.x;
        current.y = next.y;
    }

    void display(QTextEdit* console) const {
        console->append("Current position:");
        console->append("\tx = " + QString::number(current.x));
        console->append("\ty = " + QString::number(current.y));
    }
};

class MapWidget : public QWidget {
    Q_OBJECT

public:

    int SIZE_X;  // Размеры карты по X
    int SIZE_Y;  // Размеры карты по Y
    std::vector<std::vector<int>> ceils; // Массив клеток с цветами (0-3)

    MapWidget(int x, int y, QWidget *parent = nullptr) : QWidget(parent), SIZE_X(x), SIZE_Y(y) {
        ceils.resize(SIZE_X, std::vector<int>(SIZE_Y, 0)); // Инициализируем массив размером SIZE_X на SIZE_Y, заполняя его нулями (цветом пусто)
    }

    void change_ceil(int x, int y, int color) {
        if (check_data(y, x, color)) {
            ceils[x][y] = color;
            update();  // Обновление карты (перерисовка)
        }
    }


    QColor getColor(int c) const {
        switch (c) {
        case 0: return Qt::cyan;   // Пусто
        case 1: return Qt::green;  // Герой
        case 2: return Qt::red;    // Враг
        case 3: return Qt::black;  // Местный персонаж
        default: return Qt::white; // На случай ошибки
        }
    }

    void paintEvent(QPaintEvent *) override {
        QPainter painter(this);
        int cellSize = 20;  // Размер клетки
        for (int i = 0; i < SIZE_X; ++i) {
            for (int j = 0; j < SIZE_Y; ++j) {
                QRect cellRect(i * cellSize, j * cellSize, cellSize, cellSize);
                QColor color = getColor(ceils[i][j]);
                painter.fillRect(cellRect, color);  // Заливка цветом
                painter.drawRect(cellRect);         // Рамка клетки
            }
        }
    }

private:
    bool check_data(int x, int y, int color) const {
        return x >= 0 && x < SIZE_X && y >= 0 && y < SIZE_Y && color >= 0 && color <= 3;
    }
};

class GameWindow : public QWidget {
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr)
        : QWidget(parent), LIMIT_x(10), LIMIT_y(10), ENEMY_NUMBER(5), COUNTER_DEAD_ENEMIES(0) {

        // Создаем вертикальный лэйаут для главного окна
        QVBoxLayout *layout = new QVBoxLayout(this);

        // Создаем виджет карты и добавляем его в верхнюю часть
        mapWidget = new MapWidget(LIMIT_x,LIMIT_y,this);
         mapWidget->setFixedHeight(220); // Высота виджета карты
        layout->addWidget(mapWidget);  // Верхняя часть для отображения цветных клеток

        // Создаем текстовое поле для отображения информации
        display = new QTextEdit(this);
        display->setReadOnly(true);
        QFont font = display->font(); // Получаем текущий шрифт
        font.setPointSize(10); // Устанавливаем размер шрифта (например, 10)
        display->setFont(font); // Применяем шрифт к виджету
        display->setFixedHeight(350); // Высота текстового поля для вывода

        layout->addWidget(display);  // Средняя часть для вывода текста

        // Создаем поле для ввода текста
        input = new QLineEdit(this);


        layout->addWidget(input);  // Нижняя часть для ввода текста

        setLayout(layout);  // Устанавливаем лэйаут для главного окна

        std::srand(std::time(nullptr));
        initGame();

        connect(input, &QLineEdit::returnPressed, this, &GameWindow::processCommand);
    }
private:
    QTextEdit *display;
    QLineEdit *input;
    MapWidget *mapWidget;

    int32_t LIMIT_x, LIMIT_y, ENEMY_NUMBER, COUNTER_DEAD_ENEMIES=0;
    std::vector<Person> enemies;
    std::vector<Move> enemy_moves;
    Person hero;
    Move hero_move;

    bool is_near(const Vector& v1, const Vector& v2)
    {
        if (v1.x == v2.x && v1.y == v2.y)
        {
            return true;
        }
        if ((v1.x + 1 == v2.x || v1.x - 1 == v2.x) && (v1.y == v2.y || v1.y + 1 == v2.y || v1.y - 1 == v2.y))
        {
            return true;
        }
        return false;
    }
    bool is_equal(const Vector& v1, const Vector& v2)
        {
                 return (v1.x==v2.x && v1.y == v2.y);
         }


    // Функция задержки 1 секунда
    void delay(int seconds = 1)
    {
        QEventLoop loop;
        QTimer::singleShot(seconds * 1000, &loop, &QEventLoop::quit);
        loop.exec();
    }

    // Пример замены вывода в консоль через QTextEdit
    void displayMessage(QTextEdit* console, const QString& message)
    {
        console->append(message);  // Выводим сообщение в текстовое поле
    }

    // Адаптация функции боя
    bool fight(QTextEdit* console, Person& p1, Person& p2)
    {
        displayMessage(console, "!!!!!!FIGHT!!!!!!");
        displayMessage(console, QString("%1 took a damage: - %2").arg(p1.name).arg(p2.damage));

        p1.armor -= p2.damage;
        if (p1.armor < 0)
        {
            p1.health += p1.armor;
            p1.armor = 0;
        }

        displayMessage(console, QString("%1 took a damage: - %2").arg(p2.name).arg(p1.damage));

        p2.armor -= p1.damage;
        if (p2.armor < 0)
        {
            p2.health += p2.armor;
            p2.armor = 0;
        }
        displayMessage(console, "-----END FIGHT----");
        std::getchar();
        return true;
    }

    // Адаптация отображения героя
    void display_game_hero(QTextEdit* console, const Person& hero, const Move& hero_move)
    {
        displayMessage(console, "--------Hero---------");
        hero.display(console);   // Допустим, метод display принимает QTextEdit* для вывода
        hero_move.display(console);  // Аналогично
        displayMessage(console, "---------------------");
    }


    void display_game_enemy(QTextEdit* console, const Person& enemy, const Move& enemy_move)
    {
        displayMessage(console, "-------Enemy-------");

                enemy.display(console);
                enemy_move.display(console);
displayMessage(console, "----------------");
    }
    // Адаптация отображения врагов
    void display_game_enemies(QTextEdit* console, const std::vector<Person>& enemies, const std::vector<Move>& enemy_moves)
    {
        displayMessage(console, "-------Enemies-------");
        for (size_t i = 0; i < enemies.size(); ++i)
        {
            if (!enemies[i].is_dead())
            {
                enemies[i].display(console);
                enemy_moves[i].display(console);
            }
        }
        displayMessage(console, "-----------------");
    }



    void initGame() {

        displayMessage(display,"Input commands: load, save, exit,U,D,L or R and press Enter.");


        enemies.resize(ENEMY_NUMBER);
        enemy_moves.resize(enemies.size());
        for (size_t i = 0; i < enemies.size(); ++i) {
            enemies[i].health = enemies[i].VITALITY_MIN + rand() % (enemies[i].VITALITY_MAX - enemies[i].VITALITY_MIN + 1);
            enemies[i].damage = enemies[i].DAMAGE_MIN + rand() % (enemies[i].DAMAGE_MAX - enemies[i].DAMAGE_MIN + 1);
            enemies[i].armor = enemies[i].ARMOR_MIN + rand() % (enemies[i].ARMOR_MAX - enemies[i].ARMOR_MIN + 1);
            enemies[i].name = "Enemy_" + QString::number(i);
            enemy_moves[i].LIMIT.x = LIMIT_x;
            enemy_moves[i].LIMIT.y = LIMIT_y;

            while(true)
            {
              int32_t x = std::rand()%LIMIT_x;
              int32_t y = std::rand()%LIMIT_y;

              if(!mapWidget->ceils[x][y])
                           {

                  enemy_moves[i].current.x=x;
                  enemy_moves[i].current.y=y;
                  mapWidget->change_ceil(x,y,2);//enemy color
                    delay(1);
                  break;
                 }





            }


        }
        display_game_enemies(display,enemies,enemy_moves);  // Выводим информацию о врагах

        hero_move.LIMIT.x=LIMIT_x;
        hero_move.LIMIT.y=LIMIT_y;

       hero.reset_data_to_zero();
        hero.write_data(this);

        int32_t x = std::rand()%LIMIT_x;
        int32_t y = std::rand()%LIMIT_y;
        hero_move.current.x = x;
        hero_move.current.y = y;

                 mapWidget->change_ceil(x,y,1);//enemy color
                 delay(1);


                 display_game_hero(display, hero,hero_move);


    }

    void processCommand() {
        QString command = input->text().trimmed();
        input->clear();


        if (command == "exit") {
            QApplication::quit();
        }else if (command == "save") {
            save_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
            return;
        } else if (command == "load") {
            load_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
            return;
        }
        else if (command == "R") {
            hero_move.right();
        } else if (command == "L") {
            hero_move.left();
        } else if (command == "U") {
            hero_move.up();
        } else if (command == "D") {
            hero_move.down();
        } else {
            display->append("Unknown command: " + command);
            return;
        }
        if(mapWidget->getColor(mapWidget->ceils[hero_move.current.x][hero_move.current.y]) == Qt::green) // smb doesn't come to this place
        {
        mapWidget->change_ceil(hero_move.current.x,hero_move.current.y, 0);//return to bl    ue color
        delay(1);
        }

        hero_move.update_position();

        mapWidget->change_ceil(hero_move.current.x,hero_move.current.y, 1);//to green    ue color
        delay(1);

        display_game_hero(display,hero,hero_move);

// is hero near to enemies
        for(size_t i=0; i<enemies.size(); ++i)
        {
            if(!enemies[i].is_dead())
            {
                 if(is_near(hero_move.current, enemy_moves[i].current))
                 {
                  fight(display,hero,enemies[i]);

                  display_game_hero(display,hero,hero_move);
                  display_game_enemy(display,enemies[i],enemy_moves[i]);

                  if(hero.is_dead())
                  {
                      std::cout << "You lose.\n";
                      mapWidget->change_ceil(hero_move.current.x,hero_move.current.y,3); //color black for dead
                      delay(1);
                      hero.reset_data_to_zero();
                      for(size_t i=0; i<enemies.size(); ++i)
                      {
                          enemies[i].reset_data_to_zero();
                      }
                      update_map_to_zero();
                      save_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
                      QApplication::quit();
                  }
                  if(enemies[i].is_dead())
                  {
                      ++COUNTER_DEAD_ENEMIES;
                      mapWidget->change_ceil(enemy_moves[i].current.x, enemy_moves[i].current.y, 3); //black color
                      delay(1);


                      if(COUNTER_DEAD_ENEMIES == enemies.size())
                      {
                          std::cout << "You win.\n";
                          hero.reset_data_to_zero();


                          for(size_t i=0; i<enemies.size(); ++i)
                          {
                              enemies[i].reset_data_to_zero();

                          }

                          update_map_to_zero();
                          save_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
                      QApplication::quit();
                      }
                  }
                 }
            }
        }


        // create enemy direction


        for(size_t i=0; i<enemies.size(); ++i)
        {

            if(!enemies[i].is_dead())
            {
                 int32_t number;
                 number = std::rand()%4;

                 switch(number)
                 {
                 case 0: enemy_moves[i].left();
                                        break;
                 case 1: enemy_moves[i].right();
                  break;
                 case 2: enemy_moves[i].up();
                  break;
                 case 3: enemy_moves[i].down();
                  break;
                 default:
                  break;
                 }

                //Encounting
                 bool stop = 0;
                 for(size_t j=0; j<enemies.size(); ++j)
                 {
                  if(j != i  && !(enemies[j].is_dead()))
                  {
                      if(is_equal(enemy_moves[i].next,enemy_moves[j].current))
                      {
                          stop=1;
                      }

                  }

                 }
                 if(!stop)
                 {

                  if(mapWidget->getColor(mapWidget->ceils[enemy_moves[i].current.x][enemy_moves[i].current.y]) == Qt::red) // smb doesn't come to this place
                  {
                  mapWidget->change_ceil(enemy_moves[i].current.x,enemy_moves[i].current.y,0);//return to blue, ceil is empty
                 }

                  enemy_moves[i].update_position();
                  mapWidget->change_ceil(enemy_moves[i].current.x, enemy_moves[i].current.y,2);//create a red ceil, hear a enemy
                  delay(1);

                  display_game_enemy(display,enemies[i],enemy_moves[i]);

                  if(is_near(hero_move.current,enemy_moves[i].current))
                    {
                        fight(display, hero,enemies[i]);
                        display_game_hero(display,hero,hero_move);
                        display_game_enemy(display,enemies[i],enemy_moves[i]);
                  }
                  if(hero.is_dead())
                  {
                        std::cout << "You lose.\n";
                        mapWidget->change_ceil(hero_move.current.x,hero_move.current.y,3); //color black for dead
                        delay(1);
                        hero.reset_data_to_zero();
                        for(size_t i=0; i<enemies.size(); ++i)
                        {
                          enemies[i].reset_data_to_zero();
                        }
                        update_map_to_zero();
                        save_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
                        QApplication::quit();
                  }
                  if(enemies[i].is_dead())
                  {
                        ++COUNTER_DEAD_ENEMIES;
                        mapWidget->change_ceil(enemy_moves[i].current.x, enemy_moves[i].current.y, 3); //black color
                        delay(1);


                        if(COUNTER_DEAD_ENEMIES == enemies.size())
                        {
                          std::cout << "You win.\n";
                          hero.reset_data_to_zero();


                          for(size_t i=0; i<enemies.size(); ++i)
                          {
                              enemies[i].reset_data_to_zero();

                          }

                          update_map_to_zero();
                          save_game("savegame.bin", hero, enemies, hero_move, enemy_moves, COUNTER_DEAD_ENEMIES, mapWidget);
                          QApplication::quit();
                        }
                  }
                 }
            }



        }

    }









    void update_map_to_zero() {
        // Сбрасываем все клетки на карте
        for (int i = 0; i < mapWidget->SIZE_X; ++i) {
            for (int j = 0; j < mapWidget->SIZE_Y; ++j) {
                mapWidget->change_ceil(i, j, 0);  // Пустая клетка
            }
        }
    }






    bool load_game(const std::string& filename,
                   Person& hero,
                   std::vector<Person>& enemies,
                   Move& hero_move,
                   std::vector<Move>& enemy_moves,
                   int32_t& COUNTER_DEAD_ENEMIES,
                   MapWidget* mapWidget) { // Изменили здесь на mapWidget
        std::ifstream ifs(filename, std::ios_base::binary | std::ios_base::in);

        if (!ifs.is_open()) {
            std::cout << "Can't be opened." << std::endl;
            return false;
        }

        // Загрузка количества убитых врагов
        ifs.read(reinterpret_cast<char*>(&COUNTER_DEAD_ENEMIES), sizeof(COUNTER_DEAD_ENEMIES));

        // Загрузка имени героя
        int32_t length;
        ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
        hero.name.resize(length);
        std::vector<char> nameBuffer(length); // Создаем временный буфер
        ifs.read(nameBuffer.data(), length); // Читаем данные в буфер
        hero.name = QString::fromStdString(std::string(nameBuffer.data(), length)); // Преобразуем в QString

        // Загрузка характеристик героя
        ifs.read(reinterpret_cast<char*>(&hero.armor), sizeof(hero.armor));
        ifs.read(reinterpret_cast<char*>(&hero.health), sizeof(hero.health));
        ifs.read(reinterpret_cast<char*>(&hero.damage), sizeof(hero.damage));

        // Загрузка данных врагов
        enemies.clear();
        while (ifs.peek() != EOF) {
            Person enemy;
            int32_t length;
            ifs.read(reinterpret_cast<char*>(&length), sizeof(length));
            enemy.name.resize(length);
            std::vector<char> nameBuffer(length); // Создаем временный буфер
            ifs.read(nameBuffer.data(), length); // Читаем данные в буфер
            enemy.name = QString::fromStdString(std::string(nameBuffer.data(), length)); // Преобразуем в QString
            ifs.read(reinterpret_cast<char*>(&enemy.armor), sizeof(enemy.armor));
            ifs.read(reinterpret_cast<char*>(&enemy.health), sizeof(enemy.health));
            ifs.read(reinterpret_cast<char*>(&enemy.damage), sizeof(enemy.damage));
            enemies.push_back(enemy);
        }

        // Загрузка движения героя
        ifs.read(reinterpret_cast<char*>(&hero_move.current.x), sizeof(hero_move.current.x));
        ifs.read(reinterpret_cast<char*>(&hero_move.current.y), sizeof(hero_move.current.y));
        ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.x), sizeof(hero_move.LIMIT.x));
        ifs.read(reinterpret_cast<char*>(&hero_move.LIMIT.y), sizeof(hero_move.LIMIT.y));

        // Загрузка движения врагов
        enemy_moves.clear();
        Move enemy_move;
        while (ifs.read(reinterpret_cast<char*>(&enemy_move.current.x), sizeof(enemy_move.current.x))) {
            ifs.read(reinterpret_cast<char*>(&enemy_move.current.y), sizeof(enemy_move.current.y));
            ifs.read(reinterpret_cast<char*>(&enemy_move.LIMIT.x), sizeof(enemy_move.LIMIT.x));
            ifs.read(reinterpret_cast<char*>(&enemy_move.LIMIT.y), sizeof(enemy_move.LIMIT.y));
            enemy_moves.push_back(enemy_move);
        }

        // Загрузка данных клеток карты
        mapWidget->ceils.clear(); // Изменили здесь на mapWidget
        int32_t rows = mapWidget->SIZE_X/* задайте количество строк в вашей карте */;
        int32_t cols = mapWidget->SIZE_Y/* задайте количество колонок в вашей карте */;
        mapWidget->ceils.resize(rows, std::vector<int32_t>(cols)); // Изменили здесь на mapWidget

        for (size_t i = 0; i < rows; ++i) {
            for (size_t j = 0; j < cols; ++j) {
                ifs.read(reinterpret_cast<char*>(&mapWidget->ceils[i][j]), sizeof(mapWidget->ceils[i][j]));
            }
        }

        ifs.close();
        std::cout << "Game loaded successfully." << std::endl;
        return true;
    }

    bool save_game(const std::string& filename,
                   const Person& hero,
                   const std::vector<Person>& enemies,
                   const Move& hero_move,
                   const std::vector<Move>& enemy_moves,
                   const int32_t& COUNTER_DEAD_ENEMIES,
                   const MapWidget* mapWidget) { // Изменили здесь на mapWidget
        std::ofstream ofs(filename, std::ios_base::binary | std::ios_base::out);

        if (!ofs.is_open()) {
            std::cout << "Can't be opened." << std::endl;
            return false;
        }

        // Сохранение количества убитых врагов
        ofs.write(reinterpret_cast<const char*>(&COUNTER_DEAD_ENEMIES), sizeof(COUNTER_DEAD_ENEMIES));

        // Сохранение имени героя
        int32_t length = hero.name.toUtf8().size(); // Получаем длину имени в байтах
        ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
        ofs.write(hero.name.toUtf8().data(), length); // Сохраняем имя героя в файл


        // Сохранение характеристик героя
        ofs.write(reinterpret_cast<const char*>(&hero.armor), sizeof(hero.armor));
        ofs.write(reinterpret_cast<const char*>(&hero.health), sizeof(hero.health));
        ofs.write(reinterpret_cast<const char*>(&hero.damage), sizeof(hero.damage));

        // Сохранение данных врагов
        for (const auto& enemy : enemies) {
            length = enemy.name.toUtf8().size(); // Получаем размер имени врага
            ofs.write(reinterpret_cast<const char*>(&length), sizeof(length));
            ofs.write(enemy.name.toUtf8().constData(), length); // Используем toUtf8()
            ofs.write(reinterpret_cast<const char*>(&enemy.armor), sizeof(enemy.armor));
            ofs.write(reinterpret_cast<const char*>(&enemy.health), sizeof(enemy.health));
            ofs.write(reinterpret_cast<const char*>(&enemy.damage), sizeof(enemy.damage));
        }

        // Сохранение движения героя
        ofs.write(reinterpret_cast<const char*>(&hero_move.current.x), sizeof(hero_move.current.x));
        ofs.write(reinterpret_cast<const char*>(&hero_move.current.y), sizeof(hero_move.current.y));
        ofs.write(reinterpret_cast<const char*>(&hero_move.LIMIT.x), sizeof(hero_move.LIMIT.x));
        ofs.write(reinterpret_cast<const char*>(&hero_move.LIMIT.y), sizeof(hero_move.LIMIT.y));

        // Сохранение движения врагов
        for (const auto& enemy_move : enemy_moves) {
            ofs.write(reinterpret_cast<const char*>(&enemy_move.current.x), sizeof(enemy_move.current.x));
            ofs.write(reinterpret_cast<const char*>(&enemy_move.current.y), sizeof(enemy_move.current.y));
            ofs.write(reinterpret_cast<const char*>(&enemy_move.LIMIT.x), sizeof(enemy_move.LIMIT.x));
            ofs.write(reinterpret_cast<const char*>(&enemy_move.LIMIT.y), sizeof(enemy_move.LIMIT.y));
        }

        // Сохранение данных клеток карты
        for (const auto& row : mapWidget->ceils) { // Изменили здесь на mapWidget
            for (const auto& cell : row) {
                ofs.write(reinterpret_cast<const char*>(&cell), sizeof(cell));
            }
        }

        ofs.close();
        std::cout << "Game saved successfully." << std::endl;
        return true;
    }



};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    GameWindow window;
    window.show();

    return app.exec();
}

#include "main.moc"
