#pragma once

#include <iostream>

using namespace std;

/*
    1961. 숫자 배열 회전
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Pq-OKAVYDFAUq&categoryId=AV5Pq-OKAVYDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1961
    {
    public:
        void Solution();
    };

    void Q1961::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;
            int arr[N][N];

            for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    cin >> arr[j][i];

            cout << '#' << test_case << '\n';
            int iMin = N - 1;
            for (int i = 0; i < N; ++i)
            {
                for (int j = N - 1; j >= 0; --j)
                    cout << arr[i][j];

                cout << ' ';

                for (int j = N - 1; j >= 0; --j)
                    cout << arr[j][iMin];

                cout << ' ';

                for (int j = 0; j < N; ++j)
                    cout << arr[iMin][j];

                cout << '\n';

                --iMin;
            }
        }
    }
}
