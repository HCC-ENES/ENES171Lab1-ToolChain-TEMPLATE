cpp
#include <gtest/gtest.h>
#include "../include/sensor.h"

TEST(ComputePower, Basic) {
    EXPECT_DOUBLE_EQ(computePower(3.0, 4.0), 12.0);
}

TEST(ComputePower, Zero) {
    EXPECT_DOUBLE_EQ(computePower(0, 10), 0);
}

TEST(ComputePower, Negative) {
    EXPECT_DOUBLE_EQ(computePower(-2, 5), -10);
}
