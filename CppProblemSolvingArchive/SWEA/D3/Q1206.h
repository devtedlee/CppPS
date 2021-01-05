#pragma once

#include <iostream>

using namespace std;

/*
    1206. [S/W 문제해결 기본] 1일차 - View
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE
*/

namespace d3
{
    class Q1206
    {
    public:
        void Solution();
    };

    void Q1206::Solution()
    {
        int test_case;
        int T = 10;
        int buildings[1000];
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;
            for (int i = 0; i < N; ++i)
                cin >> buildings[i];

            int result = 0;

            for (int i = 2; i < N - 2; ++i)
            {
                int p = buildings[i];
                int leftMax = buildings[i - 1] > buildings[i - 2] ? buildings[i - 1] : buildings[i - 2];
                int rightMax = buildings[i + 1] > buildings[i + 2] ? buildings[i + 1] : buildings[i + 2];
                if (p > leftMax && p > rightMax)
                {
                    int max = leftMax > rightMax ? leftMax : rightMax;
                    result += p - max;
                    i += 2;
                }
            }

            cout << '#' << test_case << ' ' << result << '\n';
        }
    }
}
