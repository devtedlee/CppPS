#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1512. Number of Good Pairs
    /// https://leetcode.com/problems/number-of-good-pairs/
    /// </summary>
    class Q1512
    {
    public:
        int numIdenticalPairs(vector<int>& nums)
        {
            int pairCount = 0;
            for (int i = 0; i < nums.size(); ++i)
                for (int j = i + 1; j < nums.size(); ++j)
                    if (nums[i] == nums[j])
                        ++pairCount;

            return pairCount;
        }
    };
}