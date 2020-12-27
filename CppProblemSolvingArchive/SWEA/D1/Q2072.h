#pragma once

#include<iostream>

using namespace std;

/*
    2072. 홀수만 더하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QSEhaA5sDFAUq&categoryId=AV5QSEhaA5sDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2072
    {
    public:
        Q2072();
        void Solution();
    };

    void Q2072::Solution()
    {
        int test_case;
        int T;

        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int result = 0;
            for (int i = 0; i < 10; ++i)
            {
                int val;
                cin >> val;
                if (val % 2 != 0)
                {
                    result += val;
                }
            }

            cout << "#" << test_case << " " << result << endl;
        }
    }
}
