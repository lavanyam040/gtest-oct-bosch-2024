#include <StringCalculator.h>
#include <gtest/gtest.h>

TEST(string_calculator_add,when_passed_a_single_number_return_0_for_Empty){

StringCalculator objUnderTest;
string input="";
int expectedValue=0;

int actualValue =objUnderTest Add(input);
ASSERT_EQ(expectedValue,actualValue);
}
TEST1(string_calculator_add,when_passed_a_single_number_return_0_for_ZERO){

StringCalculator objUnderTest;
string input="";
int expectedValue=0;

int actualValue =objUnderTest Add(input);
ASSERT_EQ(expectedValue,actualValue);
}
