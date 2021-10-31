#include "gtest/gtest.h"

#include "op_test.hpp"

TEST(Rand1, RandNumber) {
	Op* test = new Op(rand() % 100);
	EXPECT_EQ(test->evaluate(), rand() % 100);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
