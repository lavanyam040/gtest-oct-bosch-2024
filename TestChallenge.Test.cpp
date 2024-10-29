#include <StringCalculator.h>
#include <gtest/gtest.h>

Class AdditionTest:public testting ::Test{
  protected :
  AdditionTest *objUnderTest
  int result = 0;
  void SetUp() override {
  objUnderTest = new AdditionTest();
}
  void TearDown() {
  delete  objUnderTest;
  }
};
TEST(AdditionTest, AddsTwoPositiveNumbers) {
    add(2,2 , &result);
    EXPECT_EQ(result, 4);
}
