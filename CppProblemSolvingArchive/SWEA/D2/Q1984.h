#pragma once

#include<iostream>

using namespace std;

/*
    1984. 중간 평균값 구하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pw_-KAdcDFAUq
*/

namespace d2
{
    class Q1984
    {
    public:
        void Solution();
    };

    void Q1984::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int input;
            int min = 2147483647;
            int max = 0;
            int sum = 0;
            for (int i = 0; i < 10; ++i)
            {
                cin >> input;

                if (input < min)
                    min = input;

                if (input > max)
                    max = input;

                sum += input;
            }

            sum -= max;
            sum -= min;
            double average = round(static_cast<double>(sum) / 8);
            printf("#%d %.0lf\n", test_case, average);
        }
    }
}
