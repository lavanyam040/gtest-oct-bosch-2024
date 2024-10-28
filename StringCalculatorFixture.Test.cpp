#include <StringCalculator.h>
#include <gtest/gtest.h>

Class StringCalculatorAddFixture:public testting ::Test{
  protected :
  StringCalculator *objUnderTest
  void SetUp() override {
  objUnderTest = new Stringcalculator();
}
  void TearDown() {
  delete  objUnderTest;
  }
};

TEST(StringCalculatorAddFixture,when_passed_a_single_number_return_0_for_Empty){
string input="";
int expectedValue=0;
int actualValue = objUnderTest-> Add(input);
ASSERT_EQ(expectedValue,actualValue);
}


TEST(StringCalculatorAddFixture,when_passed_a_single_number_return_0_for_Zero){
string input="";
int expectedValue=0;
int actualValue = objUnderTest-> Add(input);
ASSERT_EQ(expectedValue,actualValue);
}

TEST(StringCalculatorAddFixture,when_passed_a_single_number_return_0_for_One){
string input="";
int expectedValue=1;
int actualValue =objUnderTest ->Add(input);
ASSERT_EQ(expectedValue,actualValue);
}

TEST(StringCalculatorAddFixture,when_passed_two_comma_delimited_numbers){
  string input = "1,2";
  int expectedValue = 3;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_passed_multiple_comma_delimited_numbers){
  string input = "1,2,3";
  int expectedValue = 6;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_delimited_with_newline_and_comma){
  string input = "1\n2,5";
  int expectedValue = 8;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
TEST(StringCalculatorAddFixture,when_passed_a_delimiter){
  string input = ""//;\n1;2";
  int expectedValue = 3;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_passed_numbers_over_1000){
  string input = "42,1001,3";
  int expectedValue = 45;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_passed_multicharacter_delimiter){
  string input = "//[***]\n8***2***3";
  int expectedValue = 13;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_passed_multiple_delimiters){
  string input = "//[*][%]\n4*2%3";
  int expectedValue = 9;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorAddFixture,when_passed_multiple_multicharacter_delimiters){
  string input ="//[**][%^]\n4**1%^9";
  int expectedValue = 14;
  int actualValue =objUnderTest ->Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}


TEST(StringCalculatorAddFixture, when_passed_negative_numbers) {
    ASSERT_THROW(objUnderTest.Add("1,-2,-4,5"), std::invalid_argument);
}
