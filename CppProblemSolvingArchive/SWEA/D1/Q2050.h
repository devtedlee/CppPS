#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
    2050. 알파벳을 숫자로 변환
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLGxKAzQDFAUq&categoryId=AV5QLGxKAzQDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2050
    {
    public:
        void Solution();
    };

    void Q2050::Solution()
    {
        string s;
        cin >> s;
        int sLen = s.length();

        for (int i = 0; i < sLen; ++i)
        {
            cout << static_cast<int>(s[i]) - 64 << ' ';
        }
    }
}
