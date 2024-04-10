#include <gtest/gtest.h>
#include <vector>
#include "maxSubarraySum.h"

using namespace std;

TEST(MaxSubarraySumTest, abeNumbers) {
    vector<int> nums = { 1, 4, 5, -3, -2 };
    EXPECT_EQ(maxSubarraySum(nums), 10);
}

TEST(MaxSubarraySumTest, abdNumbers) {
    vector<int> nums = { 5, -3, 4, 2, 1 };
    EXPECT_EQ(maxSubarraySum(nums), 9);
}

TEST(MaxSubarraySumTest, aceNumbers) {
    vector<int> nums = { -4, 1, 2, -2 };
    EXPECT_EQ(maxSubarraySum(nums), 3);
}

TEST(MaxSubarraySumTest, acdNumbers) {
    vector<int> nums = { -3, 1, -2, 3, 4 };
    EXPECT_EQ(maxSubarraySum(nums), 7);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
