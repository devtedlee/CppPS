#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 771. Jewels and Stones
    /// https://leetcode.com/problems/jewels-and-stones/
    /// </summary>
    class Q771
    {
    public:
        int numJewelsInStones(string jewels, string stones) 
        {
            int jewelCount = 0;
            for (int i = 0; i < jewels.length(); ++i)
                for (int j = 0; j < stones.length(); ++j)
                    if (jewels[i] == stones[j])
                        ++jewelCount;

            return jewelCount;
        }
    };
}