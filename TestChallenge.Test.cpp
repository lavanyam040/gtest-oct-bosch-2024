#include <StringCalculator.h>
#include <gtest/gtest.h>

Class AdditionTest:public testting ::Test{
  protected :
   int result;
    void SetUp() override {
        result = 0;
  }
};
TEST(AdditionTest, AddsTwoPositiveNumbers) {
    add(2,2 , &result);
    EXPECT_EQ(result, 4);
}
