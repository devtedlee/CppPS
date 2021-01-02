#pragma once

#include<iostream>

using namespace std;

/*
    2027. 대각선 출력하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QFuZ6As0DFAUq&categoryId=AV5QFuZ6As0DFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2027
    {
    public:
        void Solution();
    };

    void Q2027::Solution()
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                if (i == j)
                    cout << '#';
                else
                    cout << '+';
            }
            cout << '\n';
        }
    }
}
