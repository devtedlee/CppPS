#pragma once

#include<iostream>

using namespace std;

/*
    2029. 몫과 나머지 출력하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QGNvKAtEDFAUq&categoryId=AV5QGNvKAtEDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2029
    {
    public:
        void Solution();
    };

    void Q2029::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            int divider;
            cin >> N;
            cin >> divider;

            cout << '#' << test_case << ' ' << N / divider << ' ' << N % divider << '\n';
        }
    }
}
