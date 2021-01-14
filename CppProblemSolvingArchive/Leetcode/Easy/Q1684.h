#pragma once

#include <vector>
#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1684. Count the Number of Consistent Strings
    /// https://leetcode.com/problems/count-the-number-of-consistent-strings/
    /// </summary>
    class Q1684
    {
    public:
        int countConsistentStrings(string allowed, vector<string>& words) {
            int count = 0;
            for (int i = 0; i < words.size(); ++i)
            {
                bool isConsistentWord = true;
                string word = words[i];
                for (int j = 0; j < word.length(); ++j)
                {
                    bool isConsistent = false;
                    for (int k = 0; k < allowed.length(); ++k)
                    {
                        if (word[j] == allowed[k])
                        {
                            isConsistent = true;
                            break;
                        }
                    }

                    if (!isConsistent)
                    {
                        isConsistentWord = false;
                        break;
                    }
                }

                if (isConsistentWord)
                    ++count;
            }

            return count;
        }
    };
}