#pragma once

#include <iostream>

using namespace std;

/*
    1945. 간단한 소인수분해
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pl0Q6ANQDFAUq&categoryId=AV5Pl0Q6ANQDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1945
    {
    public:
        void Solution();
    };

    void Q1945::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        int nums[5] = { 2, 3, 5, 7, 11 };
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;

            cout << '#' << test_case << ' ';
            for (int i = 0; i < 5; ++i)
            {
                int count = 0;
                int divider = nums[i];
                double num;
                while (N > 0)
                {
                    num = (double)N / divider;
                    if (num - (int)num != 0)
                        break;

                    N /= divider;
                    ++count;
                }

                cout << count << ' ';
            }
            cout << '\n';
        }
    }
}
