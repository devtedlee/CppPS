#pragma once

#include <iostream>

using namespace std;

/*
    1940. °¡¶ù! RCÄ«!
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PjMgaALgDFAUq
*/

namespace d2
{
    class Q1940
    {
    public:
        void Solution();
    };

    void Q1940::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            cin >> N;

            int distance = 0;
            int speed = 0;
            for (int i = 0; i < N; ++i)
            {
                int status;
                cin >> status;
                if (status > 0)
                {
                    int tmpSpeed;
                    cin >> tmpSpeed;
                    if (status > 1)
                        speed = tmpSpeed > speed ? 0 : speed - tmpSpeed;
                    else
                        speed += tmpSpeed;
                }

                distance += speed;
            }

            cout << '#' << test_case << ' ' << distance << '\n';
        }
    }
}
