#pragma once

#include <iostream>

using namespace std;

/*
    2001. ÆÄ¸® ÅðÄ¡
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PzOCKAigDFAUq&categoryId=AV5PzOCKAigDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q2001
    {
    public:
        void Solution();
    };

    void Q2001::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N, M;
            int arr[16][16];

            cin >> N;
            cin >> M;
            for (int y = 0; y < N; ++y)
                for (int x = 0; x < N; ++x)
                    cin >> arr[x][y];

            int maxSum = 0;
            for (int i = 0; i < N - M + 1; ++i)
            {
                for (int j = 0; j < N - M + 1; ++j)
                {
                    int sum = 0;
                    for (int y = i; y < i + M; ++y)
                    {
                        for (int x = j; x < j + M; ++x)
                        {
                            sum += arr[x][y];
                        }
                    }

                    if (sum > maxSum)
                        maxSum = sum;
                }
            }

            cout << '#' << test_case << ' ' << maxSum << '\n';
        }
    }
