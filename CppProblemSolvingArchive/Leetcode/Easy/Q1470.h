#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1470. Shuffle the Array
    /// https://leetcode.com/problems/shuffle-the-array/
    /// </summary>
    class Q1470
    {
    public:
        vector<int> shuffle(vector<int>& nums, int n) {
            vector<int> result;
            for (int i = 0; i < n; ++i)
            {
                result.push_back(nums[i]);
                result.push_back(nums[i + n]);
            }

            return result;
        }
    };
}