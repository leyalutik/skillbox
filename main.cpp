//#include <iostream>

#define COUT(x) std::cout << x <<  std::endl;

#define CONCAT(x,y) x##_##y
#define P_1 "Monday"
#define P_2 "Tuesday"


#define INPUT(x) std::cin >> x;
#define EVALUATE(x) x
#define PRINT_WEEK_DAY(x) {\
	switch(EVALUATE(x))		\
	{				\
	case (EVALUATE(x)):		\
		COUT(CONCAT(P,EVALUATE(VALUATE(x)))) 	\
		break;			\
	default:			\
		COUT("Unknown command")	\
	}				 \
}





int main()
{
int x;
INPUT(x);
PRINT_WEEK_DAY(x)

	return 0;
}
