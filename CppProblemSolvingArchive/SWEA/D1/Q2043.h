#pragma once

#include<iostream>

using namespace std;

/*
    2043. 서랍의 비밀번호
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QJ_8KAx8DFAUq&categoryId=AV5QJ_8KAx8DFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2043
    {
    public:
        void Solution();
    };

    void Q2043::Solution()
    {
        int P, K;
        scanf("%d %d", &P, &K);

        printf("%d", P - K + 1);
    }
}
