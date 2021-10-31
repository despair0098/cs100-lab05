#include "gtest/gtest.h"

#include "op_test.hpp"
#include "Mult.hpp"
#include "Sub.hpp"
#include "Add.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "MockClasses.hpp"

TEST(Mult1, OpNegativeAndPositive) {
    Base* test1 = new NegativeOp();
    Base* test2 = new PositiveOp();
    Base* mult = new Mult(test1, test2);
    EXPECT_EQ(mult->evaluate(),- 38.5);
    EXPECT_EQ(mult->stringify(), "(-7.0*5.5)");
}

TEST(Mult2, OpZeroAndNegative) {
    Base* test1 = new ZeroOp();
    Base* test2 = new NegativeOp();
    Base* mult = new Mult(test1, test2);    
    EXPECT_EQ(mult->evaluate(), 0);
    EXPECT_EQ(mult->stringify(), "(0.0*-7.0)");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
