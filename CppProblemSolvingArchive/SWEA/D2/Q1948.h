#pragma once

#include <iostream>

using namespace std;

/*
    1948. 날짜 계산기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PnnU6AOsDFAUq&categoryId=AV5PnnU6AOsDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1948
    {
    public:
        void Solution();
    };

    void Q1948::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        const int DAYS[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int month1, day1;
            int month2, day2;

            cin >> month1;
            cin >> day1;
            cin >> month2;
            cin >> day2;

            int result = day2;
            bool isFirst = true;
            for (int i = month1 - 1; i <= month2; ++i)
            {
                int dayLen = DAYS[i];
                int start = isFirst ? day1 : 1;

                result += dayLen - start + 1;
                isFirst = false;
            }

            cout << '#' << test_case << ' ' << result << '\n';
        }
    }
}
