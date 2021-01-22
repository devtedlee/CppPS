#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1588. Sum of All Odd Length Subarrays
    /// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
    /// </summary>
    class Q1588
    {
    public:
        int sumOddLengthSubarrays(vector<int>& arr) {
            int sum = 0;
            for (int sublen = 1; sublen <= arr.size(); sublen += 2)
            {
                for (int i = 0; i <= arr.size() - sublen; ++i)
                {
                    for (int j = i; j < i + sublen; ++j)
                    {
                        sum += arr[j];
                    }
                }
            }

            return sum;
        }
    };
}