#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1704. Determine if String Halves Are Alike
    /// https://leetcode.com/problems/determine-if-string-halves-are-alike/
    /// </summary>
    class Q1704
    {
    public:
        bool isContainVowel(char c) {
            const char VOWELS[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
            for (int i = 0; i < 10; ++i)
                if (VOWELS[i] == c)
                    return true;

            return false;
        }
        bool halvesAreAlike(string s) {
            int sLen = s.length();

            int vowelCountL = 0;
            int vowelCountR = 0;

            int j = sLen / 2;
            for (int i = 0; i < sLen / 2; ++i)
            {
                if (isContainVowel(s[i]))
                    ++vowelCountL;

                if (isContainVowel(s[j]))
                    ++vowelCountR;

                ++j;
            }

            return vowelCountL == vowelCountR;
        }
    };
}