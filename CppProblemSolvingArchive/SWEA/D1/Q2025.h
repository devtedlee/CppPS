#pragma once

#include<iostream>

using namespace std;

/*
    2025. N¡Ÿµ°º¿
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QFZtaAscDFAUq&categoryId=AV5QFZtaAscDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2025
    {
    public:
        void Solution();
    };

    void Q2025::Solution()
    {
        int N;
        scanf("%d", &N);

        int sum = 0;

        int j = N;
        int i = 1;
        for (; i < j; ++i)
        {
            sum += i + j;

            --j;
        }

        if (i == j)
            sum += i;

        printf("%d", sum);
    }
}
