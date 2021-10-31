#include "gtest/gtest.h"

#include "op_test.hpp"
/*
TEST(Op1, Operand) {
	Base* test1 = new PositiveOP();
	Base* op = new Op(test1);
	EXPECT_EQ(1, op->evaluate());
	EXPECT_EQ("1.0", op->stringify());
}


TEST(Op2, OperandZero) {
	Base* test2 = new ZeroOp();
	Base* op = new Op(test2);
	EXPECT_EQ(0, op->evaluate());
	EXPECT_EQ("0.0", op->stringify());
}
*/

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
