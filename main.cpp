#include <iostream>

#define COUT(x) std::cout << #x 
#define SPACE std::cout << " "
#define MAX_NUMBER 20

#define CHECK_OVERFULL(numbervan,number) {        \
        if(number > MAX_NUMBER) {                 \
            COUT(Van); COUT(numbervan); SPACE;    \
            COUT(is overfull.); COUT(\n);         \
        }                                         \
    }

#define CHECK_EMPTY(numbervan, number)  {         \
        if(number == 0) {                         \
            COUT(Van); COUT(numbervan); SPACE;    \
            COUT(is empty.); COUT(\n);            \
        }                                         \
    }

#define INPUT(numbervan, number) {                \
        COUT(Input van); COUT(numbervan:); COUT(\n); \
        std::cin >> number;                       \
    }

#define SUM(sum,x) {                              \
        sum = sum +  x;                           \
    }

int main() {
    int van1, van2, van3, van4, van5, van6, van7, van8, van9, van10;
    int S = 0;

    INPUT(1, van1);
    INPUT(2, van2);
    INPUT(3, van3);
    INPUT(4, van4);
    INPUT(5, van5);
    INPUT(6, van6);
    INPUT(7, van7);
    INPUT(8, van8);
    INPUT(9, van9);
    INPUT(10, van10);

    CHECK_OVERFULL(1, van1);
    CHECK_OVERFULL(2, van2);
    CHECK_OVERFULL(3, van3);
    CHECK_OVERFULL(4, van4);
    CHECK_OVERFULL(5, van5);
    CHECK_OVERFULL(6, van6);
    CHECK_OVERFULL(7, van7);
    CHECK_OVERFULL(8, van8);
    CHECK_OVERFULL(9, van9);
    CHECK_OVERFULL(10, van10);

    CHECK_EMPTY(1, van1);
    CHECK_EMPTY(2, van2);
    CHECK_EMPTY(3, van3);
    CHECK_EMPTY(4, van4);
    CHECK_EMPTY(5, van5);
    CHECK_EMPTY(6, van6);
    CHECK_EMPTY(7, van7);
    CHECK_EMPTY(8, van8);
    CHECK_EMPTY(9, van9);
    CHECK_EMPTY(10, van10);

    
    SUM(S, van1);
    SUM(S, van2);
    SUM(S, van3);
    SUM(S, van4);
    SUM(S, van5);
    SUM(S, van6);
    SUM(S, van7);
    SUM(S, van8);
    SUM(S, van9);
    SUM(S, van10);

    COUT(Sum is);
    SPACE;
    COUT(\n);

	    return 0;
}
