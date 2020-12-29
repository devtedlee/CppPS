#pragma once

#include <iostream>

using namespace std;

/*
    1938. 아주 간단한 계산기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjsYKAMIDFAUq&categoryId=AV5PjsYKAMIDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q1938
    {
    public:
        void Solution();
    };

    void Q1938::Solution()
    {
        int a, b;
        cin >> a;
        cin >> b;

        printf("%d \n", a + b);
        printf("%d \n", a - b);
        printf("%d \n", a * b);
        printf("%d \n", a / b);
    }
}
