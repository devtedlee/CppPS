#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
	/// <summary>
	/// 1480. Running Sum of 1d Array
    /// https://leetcode.com/problems/running-sum-of-1d-array/
	/// </summary>
	class Q1480
	{
    public:
        vector<int> runningSum(vector<int>& nums) {
            int len = nums.size();
            for (int i = 1; i < len; ++i)
                nums[i] += nums[i - 1];

            return nums;
        }
	};
}



