#pragma once

#include <iostream>

using namespace std;

/*
    1959. 두 개의 숫자열
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PpoFaAS4DFAUq&categoryId=AV5PpoFaAS4DFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1959
    {
    public:
        int getMax(int longArr[], int shortArr[], int longLen, int shortLen);
        void Solution();
    };

    int Q1959::getMax(int longArr[], int shortArr[], int longLen, int shortLen)
    {
        int max = 0;
        int len = longLen - shortLen;
        for (int i = 0; i <= len; ++i)
        {
            int tempMax = 0;
            for (int j = 0; j < shortLen; ++j)
                tempMax += longArr[i + j] * shortArr[j];

            if (tempMax > max)
                max = tempMax;
        }

        return max;
    }

    void Q1959::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N, M;
            int A[20];
            int B[20];

            cin >> N;
            cin >> M;
            for (int i = 0; i < N; ++i)
                cin >> A[i];
            for (int i = 0; i < M; ++i)
                cin >> B[i];

            int max = N > M ? getMax(A, B, N, M) : getMax(B, A, M, N);

            cout << '#' << test_case << ' ' << max << '\n';
        }
    }
}
