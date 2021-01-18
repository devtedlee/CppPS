#pragma once

#include <algorithm>
#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1614. Maximum Nesting Depth of the Parentheses
    /// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
    /// </summary>
    class Q1614
    {
    public:
        int maxDepth(string s) {
            int left = 0;
            int right = 0;
            int result = 0;
            for (int i = 0; i < s.length(); ++i)
            {
                if (s[i] == '(')
                    ++left;
                else if (s[i] == ')')
                    ++right;

                result = max(result, left - right);
            }

            return result;
        }
    };
}