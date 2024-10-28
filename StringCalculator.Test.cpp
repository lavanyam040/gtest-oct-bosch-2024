#include <StringCalculator.h>
#include <gtest/gtest.h>

TEST(string_calculator_add,when_passed_a_single_number_return_0_for_Empty){

StringCalculator objUnderTest;
string input="";
int expectedValue=0;

int actualValue =objUnderTest Add(input);
ASSERT_EQ(expectedValue,actualValue);
}


TEST(string_calculator_add,when_passed_a_single_number_return_0_for_Zero){

StringCalculator objUnderTest;
string input="";
int expectedValue=0;

int actualValue =objUnderTest Add(input);
ASSERT_EQ(expectedValue,actualValue);
}

TEST(string_calculator_add,when_passed_a_single_number_return_0_for_One){

StringCalculator objUnderTest;
string input="";
int expectedValue=1;

int actualValue =objUnderTest Add(input);
ASSERT_EQ(expectedValue,actualValue);
}

TEST(string_calculator_add,when_passed_two_comma_delimited_numbers){

  StringCalculator  objUnderTests;
  string input = "1,2";
  int expectedValue = 3;
  int actualValue = objUnderTests.Add(input);

  ASSERT_EQ(actualValue,expectedValue);
}
