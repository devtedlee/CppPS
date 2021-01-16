#pragma once

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1486. XOR Operation in an Array
    /// https://leetcode.com/problems/xor-operation-in-an-array/
    /// </summary>
    class Q1486
    {
    public:
        int xorOperation(int n, int start) {
            int xo = start;
            for (int i = 1; i < n; ++i)
                xo ^= start + 2 * i;

            return xo;
        }
    };
}