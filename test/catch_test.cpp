// NOTE: not to be done when using with catch_ros cmake macros
// #define CATCH_CONFIG_MAIN

#include <catch_ros/catch.hpp>

TEST_CASE("test_case", "[some tag]")
{
	REQUIRE( (1 + 1) == 2 );
}