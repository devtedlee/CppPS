#pragma once

#include <iostream>

using namespace std;

/*
    2019. 더블더블
    https://swexpertacademy.com/main/code/problem/problemSubmitHistory.do?contestProbId=AV5QDEX6AqwDFAUq
*/

namespace d1
{
    class Q2019
    {
    public:
        void Solution();
    };

    void Q2019::Solution()
    {
        int N;
        cin >> N;

        unsigned int mul = 1;
        printf("%d ", mul);

        for (int i = 0; i < N; ++i)
        {
            mul *= 2;
            printf("%d ", mul);
        }
    }
}
