#define CATCH_CONFIG_MAIN
#include "include/catch.hpp"
#include "../../src/include/header.h"

TEST_CASE("check_numeric_password")
{
	CHECK(check_numeric_password(1) == 1);
	CHECK(check_numeric_password(0) == 0);
	CHECK(check_numeric_password(-1) == 0);
}

TEST_CASE("check_numeric_amount")
{
	CHECK(check_numeric_amount(1) == 1);
	CHECK(check_numeric_amount(0) == 0);
	CHECK(check_numeric_amount(-1) == 0);
}

TEST_CASE("check_special_chars")
{
	REQUIRE(check_special_chars(89) == true);
	REQUIRE(check_special_chars(121) == true);
	REQUIRE(check_special_chars(78) == false);
	REQUIRE(check_special_chars(110) == false);
}