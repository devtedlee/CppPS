#pragma once

#include<iostream>

using namespace std;

/*
    1545. 거꾸로 출력해 보아요
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV2gbY0qAAQBBAS0&categoryId=AV2gbY0qAAQBBAS0&categoryType=CODE
*/

namespace d1
{
    class Q1545
    {
    public:
        Q1545();
        void Solution();
    };

    void Q1545::Solution()
    {
        int n;
        cin >> n;

        for (int i = n; i >= 0; --i)
        {
            cout << i << ' ';
        }
    }
}
