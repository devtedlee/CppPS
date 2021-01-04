#pragma once

#include <iostream>

using namespace std;

/*
    1946. 간단한 압축 풀기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PmkDKAOMDFAUq&categoryId=AV5PmkDKAOMDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1946
    {
    public:
        void Solution();
    };

    void Q1946::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;
            cout << '#' << test_case << '\n';
            int page = 0;
            for (int i = 0; i < N; ++i)
            {
                char K;
                int Ki;
                cin >> K;
                cin >> Ki;

                for (int j = 0; j < Ki; ++j)
                {
                    cout << K;

                    ++page;
                    if (page >= 10)
                    {
                        page = 0;
                        cout << '\n';
                    }
                }
            }
            cout << '\n';
        }
    }
}
