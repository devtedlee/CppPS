#pragma once

#include <iostream>
#include <set>

using namespace std;

/*
    1288. 새로운 불면증 치료법
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV18_yw6I9MCFAZN&categoryId=AV18_yw6I9MCFAZN&categoryType=CODE
*/

namespace d2
{
    class Q1288
    {
    public:
        void Solution();
    };

    void Q1288::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            set<char> set;
            char numChar[20];
            int N;
            cin >> N;

            int K = 1;
            while (true)
            {
                long long count = K * N;
                sprintf(numChar, "%d", count);
                for (int i = 0; numChar[i] != '\0'; ++i)
                    set.insert(numChar[i]);

                if (set.size() >= 10)
                {
                    cout << '#' << test_case << ' ' << count << '\n';
                    break;
                }

                ++K;
            }
        }
    }
}
