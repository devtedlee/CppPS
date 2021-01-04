#pragma once

#include <iostream>

using namespace std;

/*
    1285. 아름이의 돌 던지기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18-stqI8oCFAZN&categoryId=AV18-stqI8oCFAZN&categoryType=CODE
*/

namespace d2
{
    class Q1285
    {
    public:
        void Solution();
    };

    void Q1285::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            int arr[1000];
            cin >> N;
            for (int i = 0; i < N; ++i)
                cin >> arr[i];

            int minLen = 2147483647;
            int minCount = 0;

            for (int i = 0; i < N; ++i)
            {
                int val = abs(arr[i]);
                if (val < minLen)
                {
                    minLen = val;
                    minCount = 1;
                }
                else if (val == minLen)
                {
                    ++minCount;
                }
            }

            cout << '#' << test_case << ' ' << minLen << ' ' << minCount << '\n';
        }
    }
}
