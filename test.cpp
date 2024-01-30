#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

vector<int> nums = {0};
vector<int> nums_1 = {1, 2, 3, 4, 5};
vector<int> nums_2 = {-1, 2, 3, 4, 5};
int num = 0;
int num_1 = 69;
int num_2 = -69;

TEST_CASE("Sum is computed")
{
    SECTION("checking when the vector is 0")
    {
        REQUIRE(Sum(nums) == 0);
    }
    
    SECTION("checking when the vector is all positive numbers")
    {
        REQUIRE(Sum(nums_1) == 15);
    }
    
    SECTION("checking when the vector contains negative number")
    {
        REQUIRE(Sum(nums_2) == 13);
    }
    
}

TEST_CASE("Product is computed")
{
    SECTION("checking when the vector is 0")
    {
        REQUIRE(Product(nums) == 0);
    }
    
    SECTION("checking when the vector is all positive numbers")
    {
        REQUIRE(Product(nums_1) == 120);
    }
    
    SECTION("checking when the vector contains negative number")
    {
        REQUIRE(Product(nums_2) == -120);
    }
    
}

TEST_CASE("Sign is computed")
{
    SECTION("checking when num = 0")
    {
        REQUIRE(Sign(num) == 0);
    }
    
    SECTION("checking when num > 0")
    {
        REQUIRE(Sign(num_1) == 1);
    }
    SECTION("checking when num < 0")
    {
        REQUIRE(Sign(num_2) == -1);
    }
    
}