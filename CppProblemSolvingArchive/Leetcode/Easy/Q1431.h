#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1431. Kids With the Greatest Number of Candies
    /// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
    /// </summary>
    class Q1431
    {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
        {
            vector<bool> result;

            int max = 0;
            for (int i = 0; i < candies.size(); ++i)
            {
                if (max < candies[i])
                    max = candies[i];
            }

            for (int i = 0; i < candies.size(); ++i)
            {
                result.push_back(max <= candies[i] + extraCandies);
            }

            return result;
        }
    };
}