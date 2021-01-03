#pragma once

#include <iostream>

using namespace std;

/*
    1970. 쉬운 거스름돈
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PsIl6AXIDFAUq&categoryId=AV5PsIl6AXIDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1970
    {
    public:
        void Solution();
    };

    void Q1970::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        const int CUR_COUNT = 8;
        const int currencies[CUR_COUNT] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;
            cout << '#' << test_case << '\n';
            for (int i = 0; i < CUR_COUNT; ++i)
            {
                cout << N / currencies[i] << ' ';
                N %= currencies[i];
            }
            cout << '\n';
        }
    }
}
