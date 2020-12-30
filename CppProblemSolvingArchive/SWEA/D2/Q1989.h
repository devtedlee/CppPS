#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
    1989. 초심자의 회문 검사 
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PyTLqAf4DFAUq&categoryId=AV5PyTLqAf4DFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1989
    {
    public:
        void Solution();
    };

    void Q1989::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            char str[11];
            cin >> str;

            int j = strlen(str) - 1;
            bool isPalindrome = true;
            for (int i = 0; i < j; ++i)
            {
                if (str[i] != str[j])
                {
                    isPalindrome = false;
                    break;
                }
                --j;
            }

            cout << '#' << test_case << ' ' << static_cast<int>(isPalindrome) << '\n';
        }
    }
