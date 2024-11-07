// A sample program demonstrating using Google C++ testing framework.

// This sample shows how to write a simple unit test for a function,
// using Google C++ testing framework.
//
// Writing a unit test using Google C++ testing framework is easy as 1-2-3:


// Step 1. Include necessary header files such that the stuff your
// test logic needs is declared.
//
// Don't forget gtest.h, which declares the testing framework.

#include <limits.h>
#include "surgery.h"
#include "googletest/include/gtest/gtest.h"
namespace {


	TEST(is_between, ALL_VALUES)
	{

		Span span(Point{0,0},Point{0,0});
		EXPECT_TRUE(span.between_values(0,0,0));
		EXPECT_TRUE(span.between_values(1,3,2));
		EXPECT_TRUE(span.between_values(3,1,2));
		EXPECT_TRUE(span.between_values(-1,1,0));
		EXPECT_TRUE(span.between_values(1,-1,0));
		EXPECT_TRUE(span.between_values(-3,-1,-2));
		EXPECT_TRUE(span.between_values(-1,-3,-2));
		EXPECT_TRUE(span.between_values(1,1,1));
		EXPECT_TRUE(span.between_values(-1,-1,-1));

		EXPECT_FALSE(span.between_values(0,0,1));
		EXPECT_FALSE(span.between_values(1,3,0));
		EXPECT_FALSE(span.between_values(3,1,0));
		EXPECT_FALSE(span.between_values(-1,1,2));
		EXPECT_FALSE(span.between_values(1,-1,-2));
		EXPECT_FALSE(span.between_values(-3,-2,-4));
		EXPECT_FALSE(span.between_values(-2,-3,-1));
		EXPECT_FALSE(span.between_values(1,1,2));
		EXPECT_FALSE(span.between_values(-1,-1,1));


	}
	TEST(is_on_pan, ALL_VALUES)
	{

		{
			Span span(Point{0,0},Point{0,0});
			EXPECT_TRUE(span.is_on_span(0,0));
		}
		{
			Span span(Point{0,0},Point{2,2});
			EXPECT_TRUE(span.is_on_span(0,0));
			EXPECT_TRUE(span.is_on_span(1,1));
			EXPECT_TRUE(span.is_on_span(2,2));

			EXPECT_FALSE(span.is_on_span(0,1));
			EXPECT_FALSE(span.is_on_span(0,2));
			EXPECT_FALSE(span.is_on_span(1,0));
			EXPECT_FALSE(span.is_on_span(2,0));
			EXPECT_FALSE(span.is_on_span(1,2));
			EXPECT_FALSE(span.is_on_span(2,1));
		}
		{
			Span span(Point{0,0},Point{-2,2});
			EXPECT_TRUE(span.is_on_span(0,0));
			EXPECT_TRUE(span.is_on_span(-1,1));
			EXPECT_TRUE(span.is_on_span(-2,2));

			EXPECT_FALSE(span.is_on_span(0,1));
			EXPECT_FALSE(span.is_on_span(0,2));
			EXPECT_FALSE(span.is_on_span(-1,0));
			EXPECT_FALSE(span.is_on_span(-2,0));
			EXPECT_FALSE(span.is_on_span(-1,2));
			EXPECT_FALSE(span.is_on_span(-2,1));
		}
{
			Span span(Point{0,0},Point{2,-2});
			EXPECT_TRUE(span.is_on_span(0,0));
			EXPECT_TRUE(span.is_on_span(1,-1));
			EXPECT_TRUE(span.is_on_span(2,-2));

			EXPECT_FALSE(span.is_on_span(0,-1));
			EXPECT_FALSE(span.is_on_span(0,-2));
			EXPECT_FALSE(span.is_on_span(1,0));
			EXPECT_FALSE(span.is_on_span(2,0));
			EXPECT_FALSE(span.is_on_span(1,-2));
			EXPECT_FALSE(span.is_on_span(2,-1));
		}
{
			Span span(Point{0,0},Point{-2,-2});
			EXPECT_TRUE(span.is_on_span(0,0));
			EXPECT_TRUE(span.is_on_span(-1,-1));
			EXPECT_TRUE(span.is_on_span(-2,-2));

			EXPECT_FALSE(span.is_on_span(0,-1));
			EXPECT_FALSE(span.is_on_span(0,-2));
			EXPECT_FALSE(span.is_on_span(-1,0));
			EXPECT_FALSE(span.is_on_span(-2,0));
			EXPECT_FALSE(span.is_on_span(-1,-2));
			EXPECT_FALSE(span.is_on_span(-2,-1));
		}




	}
}

int main(int argc, char **argv)
{

::testing::InitGoogleTest(&argc, argv);  // Инициализация Google Test
   
RUN_ALL_TESTS();

return 0;}
// a main() function which calls RUN_ALL_TESTS() for us.
//
// This runs all the tests you've defined, prints the result, and
// returns 0 if successful, or 1 otherwise.
//
// Did you notice that we didn't register the tests?  The
// RUN_ALL_TESTS() macro magically knows about all the tests we

