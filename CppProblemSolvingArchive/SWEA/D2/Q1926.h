#pragma once

#include<iostream>
#include<string>

using namespace std;

/*
    1926. 간단한 369게임
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PTeo6AHUDFAUq&categoryId=AV5PTeo6AHUDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1926
    {
    public:
        Q1926();
        void Solution();
    };

    void Q1926::Solution()
    {
        int n;
        cin >> n;
        string numStr;

        for (int i = 1; i <= n; ++i)
        {
            bool isClap = false;
            numStr = to_string(i);
            int strLength = numStr.length();
            for (int j = 0; j < strLength; ++j)
            {
                int num = numStr[j] - '0';
                if (num != 0 && num % 3 == 0)
                {
                    cout << '-';
                    isClap = true;
                }
            }

            if (isClap)
            {
                cout << ' ';
            }
            else
            {
                cout << i << ' ';
            }
        }
    }
}
