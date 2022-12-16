#include <iostream>
#include <math.h>
#include "gtest/gtest.h"

//2. y=x^3 cos(x) - e^(2x)

using namespace std;

double addend1(double x)
{
	return x*x*x + cos(x);
}

double addend2(double x)
{
	return exp(2*x);
}
double y(double x)
{
	return  addend1(x)-addend2(x);
}

TEST(FunctionTesting, test_addend1) {
  EXPECT_DOUBLE_EQ(addend1(0),0.0);
  EXPECT_DOUBLE_EQ(addend1(1),0.999847695);
  EXPECT_DOUBLE_EQ(addend1(-1),-0.999847695);
}

TEST(FunctionTesting, test_addend2) {
  EXPECT_DOUBLE_EQ(addend2(0),1.0);
  EXPECT_DOUBLE_EQ(addend2(1),7.38905609893);
  EXPECT_DOUBLE_EQ(addend2(-1),0.13533528323);
}

TEST(FunctionTesting, test_y){
  EXPECT_DOUBLE_EQ(y(0),-1.0);
  EXPECT_DOUBLE_EQ(y(1),0.999847695-7.38905609893);
  EXPECT_DOUBLE_EQ(y(-1),-0.999847695-0.13533528323);
}

int main(int argc, char **argv)
{
   ::testing::InitGoogleTest(&argc, argv);
   return RUN_ALL_TESTS();
}
