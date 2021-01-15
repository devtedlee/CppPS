#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1221. Split a String in Balanced Strings
    /// https://leetcode.com/problems/split-a-string-in-balanced-strings/
    /// </summary>
    class Q1221
    {
    public:
        int balancedStringSplit(string s) {
            int balancedCount = 0;
            int count = 0;
            for (int i = 0; i < s.length(); ++i)
            {
                if (s[i] == 'L')
                    --count;
                else
                    ++count;

                if (count == 0)
                    ++balancedCount;
            }

            return balancedCount;
        }
    };
}