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

TEST(string_calculator_add,when_passed_multiple_comma_delimited_numbers){

  StringCalculator  objUnderTests;
  string input = "1,2,3";
  int expectedValue = 6;
  int actualValue = objUnderTests.Add(input);

  ASSERT_EQ(actualValue,expectedValue);
}

TEST(string_calculator_add,when_delimited_with_newline_and_comma){

  StringCalculator  objUnderTests;
  string input = "1\n2,5";
  int expectedValue = 8;
  int actualValue = objUnderTests.Add(input);

  ASSERT_EQ(actualValue,expectedValue);
}
TEST(string_calculator_add,when_passed_a_delimiter){

  StringCalculator  objUnderTests;
  string input = ""//;\n1;2";
  int expectedValue = 3;
  int actualValue = objUnderTests.Add(input);

  ASSERT_EQ(actualValue,expectedValue);
}

TEST(string_calculator_add,when_passed_numbers_over_1000){

  StringCalculator  objUnderTests;
  string input = "42,1001,3";
  int expectedValue = 45;
  int actualValue = objUnderTests.Add(input);

  ASSERT_EQ(actualValue,expectedValue);
}

TEST(string_calculator_add,when_passed_multicharacter_delimiter){
  
  StringCalculator  objUnderTests;
  string input = "//[***]\n8***2***3";
  int expectedValue = 13;
  int actualValue = objUnderTests.Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(string_calculator_add,when_passed_multiple_delimiters){

  StringCalculator  objUnderTests;
  string input = "//[*][%]\n4*2%3";
  int expectedValue = 9;
 
  int actualValue = objUnderTests.Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(string_calculator_add,when_passed_multiple_multicharacter_delimiters){
  
  StringCalculator  objUnderTests;
  string input ="//[**][%^]\n4**1%^9";
  int expectedValue = 14;
 
  int actualValue = objUnderTests.Add(input);
 
  ASSERT_EQ(actualValue,expectedValue);
}



