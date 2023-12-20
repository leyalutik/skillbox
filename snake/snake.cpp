#include <QApplication>
#include <QTableWidget>
#include <QPushButton>
#include <QVBoxLayout>

#include <iostream>
#include <iomanip>

//---------------------------



class Snake
{

 public:
  Snake(const int n, const int m);
  ~Snake(){delete[] massive;}
  void create_snake();
  void show();
  bool check_n(const int i);
  bool check_m(const int j);
  void change_dimension(const int n, const int m);
  int at(const int i, const int j); 
 private:
  int n=0, m=0;
  int* massive;
};



int main(int argc, char* argv[])
{
 QApplication app(argc, argv); 

 int n=5,m=5;

 Snake snake(n,m);
 snake.create_snake();

 QTableWidget* table = new QTableWidget(n, m);
 
 for(int i=0; i<n;++i)
 {
  for(int j=0; j<m; ++j)
  {
   table->setItem(i,j,new QTableWidgetItem(QString::number(snake.at(i,j)))); 
  }
 }

 table->setStyleSheet("background-color:rgb(0,191,255);");





 QPushButton* btn_exit = new QPushButton("Exit");
 QObject::connect(btn_exit, &QPushButton::clicked, &app, &QApplication::quit);

 QVBoxLayout* layout = new QVBoxLayout();
 layout->addWidget(table);
 layout->addWidget(btn_exit);

 QWidget* widget = new QWidget();
 widget->resize(600, 600);
 widget->setLayout(layout);
 widget->show();

 return app.exec();
}


//--------------------------

Snake::Snake(const int n, const int m)
{
 if(n<0 || m<0) { return;}
 
 Snake::n = n;
 Snake::m = m;
 massive = new int[n*m];
 create_snake();
 
 
}

void Snake::create_snake()
{

 for(int i=0; i<n;++i)
 {
  for(int j=0; j<m; ++j)
  {
   massive[i*m+j] = i*m + 1 + j*((i+1)%2) + (m-1-j)*(i%2);
  }
 }
}


bool Snake::check_n(const int i)
{
 return (i>=0 && i<n);
}

bool Snake::check_m(const int j)
{
 return (j>=0 && j<m);
}

int Snake::at(const int i, const int j)
{
	if(!check_n(i) && !check_m(j))
	{
		return -1;
	}
	return massive[i*m+j];
}

void Snake::change_dimension(const int n1, const int m1)
{
	if(n1<0 || m1<0) {return ;}


	delete[] massive;

	n = n1;
	m = m1;
	int* new_massive= new int[n1*m1];
	massive = new_massive;
}

