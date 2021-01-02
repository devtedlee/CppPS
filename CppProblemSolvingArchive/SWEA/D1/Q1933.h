#pragma once

#include<iostream>

using namespace std;

/*
    1933. 간단한 N 의 약수
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PhcWaAKIDFAUq&categoryId=AV5PhcWaAKIDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q1933
    {
    public:
        void Solution();
    };

    void Q1933::Solution()
    {
        int N;
        cin >> N;
        for (int i = 1; i <= N; ++i)
        {
            if (N % i == 0)
            {
                cout << i << ' ';
            }
        }
    }
}
