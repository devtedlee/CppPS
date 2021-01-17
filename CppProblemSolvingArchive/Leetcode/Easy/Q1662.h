#pragma once

#include <vector>
#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1662. Check If Two String Arrays are Equivalent
    /// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
    /// </summary>
    class Q1662
    {
    public:
        bool sol1(vector<string>& word1, vector<string>& word2)
        {
            int b = 0;
            int k = 0;
            string wordB = word2[b];
            for (int i = 0; i < word1.size(); ++i)
            {
                string wordA = word1[i];
                for (int j = 0; j < wordA.length(); ++j)
                {
                    if (k >= wordB.length())
                    {
                        ++b;
                        k = 0;
                        wordB = word2[b];
                    }

                    if (wordA[j] != wordB[k])
                        return false;

                    ++k;
                }
            }

            if (b != word2.size() - 1 || k != wordB.length())
                return false;

            return true;
        }

        bool sol2(vector<string>& word1, vector<string>& word2)
        {
            string s1;
            string s2;

            for (auto s : word1)
                s1 += s;

            for (auto s : word2)
                s2 += s;

            return s1 == s2;
        }

        bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
            return sol2(word1, word2);
        }
    };
}