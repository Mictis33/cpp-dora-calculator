#include <gtest/gtest.h>
#include "main.cpp"

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(5, 5), 10);
}
