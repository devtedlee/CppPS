#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1672. Richest Customer Wealth
    /// https://leetcode.com/problems/richest-customer-wealth/
    /// </summary>
    class Q1480
    {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int m = accounts.size();
            int n = accounts[0].size();
            int max = 0;
            for (int x = 0; x < m; ++x)
            {
                int sum = accounts[x][0];
                for (int y = 1; y < n; ++y)
                {
                    sum += accounts[x][y];
                }
                if (sum > max)
                    max = sum;
            }

            return max;
        }
    };
}