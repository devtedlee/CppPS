#pragma once

#include<iostream>

using namespace std;

/*
    2046. ½ºÅÆÇÁ Âï
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QKdT6AyYDFAUq&categoryId=AV5QKdT6AyYDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2046
    {
    public:
        Q2046();
        void Solution();
    };

    void Q2046::Solution()
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cout << '#';
        }
    }
}
