#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <tuple>
using namespace std;

//Fixture Class
class StringCalculatorAddFixture:public testing::Test{
  protected:
    StringCalculator *objUnderTest;
  void SetUp() override {
      objUnderTest=new StringCalculator();
  }
  void TearDown(){
        delete objUnderTest;
  }
};

//Value Parameterized Fixture
class StringCalculatorAddParameterizedFixture:
                                    public StringCalculatorAddFixture,
                                    public testing::WithParamInterface<tuple<string,int>>{

};


TEST_P(StringCalculatorAddParameterizedFixture, DataDrivenTestCase){
    string input=std::get<0>(GetParam());
    int expectedValue=std::get<1>(GetParam());
    int actualValue=objUnderTest->Add(input);
    ASSERT_EQ(actualValue,expectedValue);
}
TEST_F(StringCalculatorAddFixture, Throw_Invalid_Argumnet_Exceptio_For_Negetive_Numbers){
    string input="1,-2";
    EXPECT_THROW(objUnderTest->Add(input),invalid_argument);
  }

INSTANTIATE_TEST_SUITE_P(ValidValuesDataSet,StringCalculatorAddParameterizedFixture,testing::Values(
  make_tuple("",0),make_tuple("0",0),make_tuple("1",1),make_tuple("1,2",3),make_tuple("1,2,3", 6), make_tuple("1\n2,3", 6), make_tuple("//;\n1;2", 3)
));                  
