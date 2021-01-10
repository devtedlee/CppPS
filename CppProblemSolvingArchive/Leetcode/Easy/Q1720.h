#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1720. Decode XORed Array
    /// https://leetcode.com/problems/decode-xored-array/
    /// </summary>
    class Q1342
    {
    public:
        vector<int> decode(vector<int>& encoded, int first) {
            vector<int> result(encoded.size() + 1, first);
            for (int i = 0; i < encoded.size(); ++i)
                result.push_back(first ^= encoded[i]);

            return result;
        }
    };
}