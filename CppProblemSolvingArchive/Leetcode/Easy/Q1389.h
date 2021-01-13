#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1389. Create Target Array in the Given Order
    /// https://leetcode.com/problems/create-target-array-in-the-given-order/
    /// </summary>
    class Q1389
    {
    public:
        vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
            vector<int> target(nums.size(), 0);
            for (int i = 0; i < nums.size(); ++i)
            {
                int idx = index[i];
                for (int j = nums.size() - 1; j > idx; --j)
                {
                    target[j] = target[j - 1];
                }

                target[idx] = nums[i];
            }

            return target;
        }
    };
}