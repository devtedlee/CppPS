#pragma once

#include <iostream>

using namespace std;

/*
    2068. 최대수 구하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QQhbqA4QDFAUq&categoryId=AV5QQhbqA4QDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2068
    {
    public:
        void Solution();
    };

    void Q2068::Solution()
    {
        int test_case;
        int T;

        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int max;
            cin >> max;
            for (int i = 0; i < 9; ++i)
            {
                int temp;
                cin >> temp;
                if (max < temp)
                    max = temp;
            }

            cout << '#' << test_case << ' ' << max << '\n';
        }
    }
}
