#include <iostream>

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define PRINT_DAY(day_num) std::cout << DAY_##day_num << std::endl;

#define PRINT_WEEK_DAY(x) \
    switch (x) {          \
        case 1: PRINT_DAY(1); break; \
        case 2: PRINT_DAY(2); break; \
        case 3: PRINT_DAY(3); break; \
        case 4: PRINT_DAY(4); break; \
        case 5: PRINT_DAY(5); break; \
        case 6: PRINT_DAY(6); break; \
        case 7: PRINT_DAY(7); break; \
        default: std::cout << "Unknown command" << std::endl; \
    }

int main() {
    int x;
    std::cin >> x;
    PRINT_WEEK_DAY(x);
    return 0;
}

