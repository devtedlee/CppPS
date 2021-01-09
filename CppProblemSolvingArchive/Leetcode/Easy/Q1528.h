#pragma once

#include <vector>
#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1528. Shuffle String
    /// https://leetcode.com/problems/shuffle-string/
    /// </summary>
    class Q1528
    {
    public:
        string restoreString(string s, vector<int>& indices) {
            string result(s);
            for (int i = 0; i < indices.size(); ++i)
            {
                result[indices[i]] = s[i];
            }

            return result;
        }
    };
}