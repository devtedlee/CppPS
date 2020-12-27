#pragma once

#include<iostream>

using namespace std;

/*
    2071. 평균값 구하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QRnJqA5cDFAUq&categoryId=AV5QRnJqA5cDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2071
    {
    public:
        Q2071();
        void Solution();
    };

    void Q2071::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        const int N = 10;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            double sum = 0.0;
            double input;
            for (int i = 0; i < N; ++i)
            {
                cin >> input;
                sum += input;
            }

            int result = static_cast<int>(round(sum / N));

            cout << '#' << test_case << ' ' << result << '\n';
        }
    }
}
