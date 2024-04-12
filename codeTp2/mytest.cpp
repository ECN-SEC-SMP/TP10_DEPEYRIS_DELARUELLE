#include "Calculator.h"
#include <gtest/gtest.h>

TEST(FactorialTest, ZeroValue) {
    Calculator calc;
    EXPECT_EQ(1,calc.factorielle(0));
}

TEST(FactorialTest, StandardValues) {
    Calculator calc;
    EXPECT_EQ(1,calc.factorielle(1));
    EXPECT_EQ(120,calc.factorielle(5));
}

TEST(DivTest, IntOutput){
    Calculator calc;
    EXPECT_DOUBLE_EQ(2,calc.div(4,2));
}

TEST(DivTest, FloatOutput){
    Calculator calc;
    EXPECT_NEAR(2.333,calc.div(7,3),0.001);
}

TEST(DivTest, ZeroOutput){
    Calculator calc;
    ASSERT_EXIT(calc.div(7,0),::testing::ExitedWithCode(255),"Error: Division by 0 not possible");
}

TEST(AddTest, StandardValues){
    Calculator calc;
    EXPECT_EQ(10,calc.add(4,6));
}

TEST(SubTest, StandardValues){
    Calculator calc;
    EXPECT_EQ(10,calc.sub(15,5));
}