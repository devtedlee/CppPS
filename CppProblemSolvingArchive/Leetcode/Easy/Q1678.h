#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1678. Goal Parser Interpretation
    /// https://leetcode.com/problems/goal-parser-interpretation/
    /// </summary>
    class Q1678
    {
    public:
        string interpret(string command) {
            string s;
            int cLen = command.length();
            for (int i = 0; i < cLen; ++i)
            {
                if (command[i] == '(')
                {
                    if (command[i + 1] == ')')
                    {
                        s += 'o';
                        ++i;
                    }
                    else if (i + 3 < cLen && command[i + 3] == ')')
                    {
                        s += 'a';
                        s += 'l';
                        i += 3;
                    }
                }
                else
                {
                    s += command[i];
                }
            }

            return s;
        }
    };
}