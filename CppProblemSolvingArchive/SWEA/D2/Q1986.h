#pragma once

#include<iostream>

using namespace std;

/*
    1986. 지그재그 숫자
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PxmBqAe8DFAUq&categoryId=AV5PxmBqAe8DFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1986
    {
    public:
        void Solution();
    };

    void Q1986::Solution()
    {
        int test_case;
        int T;

        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;
            bool isMinus = true;
            int sum = 1;
            for (int i = 2; i <= N; ++i)
            {
                if (isMinus)
                    sum -= i;
                else
                    sum += i;

                isMinus = !isMinus;
            }
            cout << '#' << test_case << ' ' << sum << '\n';
        }
    }
}
