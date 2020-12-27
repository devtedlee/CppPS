#pragma once

#include<iostream>

using namespace std;

/*
    1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13zo1KAAACFAYh&categoryId=AV13zo1KAAACFAYh&categoryType=CODE
*/

namespace d2
{
    class Q1204
    {
    public:
        Q1204();
        void Solution();
    };

    void Q1204::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            cin >> test_case;

            const int ARR_SIZE = 101;
            int scoreRecords[ARR_SIZE] = { 0, };
            int score;
            for (int i = 0; i < 1000; ++i)
            {
                cin >> score;
                ++scoreRecords[score];
            }

            int maxCount = 0;
            int maxScore = 0;
            for (int i = 1; i < ARR_SIZE; ++i)
            {
                if (scoreRecords[i] >= maxCount)
                {
                    maxCount = scoreRecords[i];
                    maxScore = i;
                }
            }

            cout << "#" << test_case << " " << maxScore << '\n';
        }
    }
}
