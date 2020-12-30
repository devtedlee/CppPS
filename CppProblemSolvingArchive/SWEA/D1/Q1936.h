#pragma once

#include<iostream>

using namespace std;

/*
    1936. 1대1 가위바위보
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjKXKALcDFAUq
*/

namespace d1
{
    class Q1936
    {
    public:
        void Solution();
    };

    void Q1936::Solution()
    {
        // 나머지 연산을 교차로 적용시킨다는 논리적 전개를 주목하자
        int A, B;
        scanf("%d %d", &A, &B);
        A = A % 3;
        B = B % 3;

        char result;
        if (A == (B + 1) % 3)
            result = 'A';
        if (B == (A + 1) % 3)
            result = 'B';

        printf("%c", result);
    }
}
