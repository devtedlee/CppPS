#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
    2047. 신문 헤드라인
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKsLaAy0DFAUq&categoryId=AV5QKsLaAy0DFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2068
    {
    public:
        void Solution();
    };

    void Q2068::Solution()
    {
        string s;
        cin >> s;
        int sLen = s.length();
        for (int i = 0; i < sLen; ++i)
        {
            char temp = s[i];
            if (temp >= 97 && temp <= 122)
                s[i] = temp - 32;
        }

        cout << s;
    }
}
