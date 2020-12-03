#define CATCH_CONFIG_MAIN
#include <iostream>
#include <string>
#include "catch.hpp"
using namespace std;
int countChar(string input)
{
    return input.size();
}

TEST_CASE("This is a test of a normal string of a name", "[counter, countChar]")
{
    //Setup 
    int chars = 0;
    //Operation
    chars = countChar("John Smith");
    //TEST
    REQUIRE( chars == 10);
}

TEST_CASE("This test will test an empty string", "[counter, countChar]")
{
    //SETUP
    //If we set chars to zero intitially we can't prove it worked.
    int chars = 10;
    //Operation
    chars = countChar("");
    //TEST
    REQUIRE(chars == 0);
}

TEST_CASE("This test will make sure special characters are counted", "[counter,countChar]")
{
    //Setup
    int chars = 0;
    //Operation
    chars = countChar(" \n ");
    //TEST
    //This string has a space char, a new line char, and another space
    REQUIRE(chars == 3);
}