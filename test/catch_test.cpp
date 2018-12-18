#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch_ros/catch.hpp>

TEST_CASE("test_case", "[some tag]")
{
	REQUIRE( (1 + 1) == 2 );
}