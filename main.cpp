#include <iostream>

#define SPRING

#define COUT(x) std::cout << #x << "\n";

int main() {
    #ifdef SPRING
        COUT(SPRING)
    #elif defined(SUMMER)
        COUT(SUMMER)
    #elif defined(AUTUMN)
        COUT(AUTUMN)
    #elif defined(WINTER)
        COUT(WINTER)
    #else
        COUT(No_seasons)
    #endif

    return 0;
}
