#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"//C++ will find my echo_variable function code, .h = header file
#include "decimals.h"
#include "char.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);//use this as a guide to build your test assertion
}

/*test case echo_variable */
TEST_CASE("Test Echo Variable", "validation") {
	REQUIRE( echo_variable (5)== 5); //1, returning the value (5) 
	REQUIRE( echo_variable (10)== 10);//2
	REQUIRE( echo_variable (100)== 100);//3, these are test asssertions
}

/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add to double 1", "testing inconsistencies when comparing doubles") 
{
	//REQUIRE(add_to_double_1(0) == .9);//when comparing doubles, they need to be converted to 
	//intergers
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Test get char ascii value") 
{
	REQUIRE(get_char_ascii('A') == 65);//always single quotes for char type
	REQUIRE(get_char_ascii('a') == 97);
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

