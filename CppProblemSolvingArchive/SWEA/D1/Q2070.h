#pragma once

#include<iostream>

using namespace std;

/*
    2070. Å« ³ð, ÀÛÀº ³ð, °°Àº ³ð 
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QQ6qqA40DFAUq&categoryId=AV5QQ6qqA40DFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2070
    {
    public:
        Q2070();
        void Solution();
    };

    void Q2070::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        const int N = 2;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int a;
            int b;

            char out;
            cin >> a;
            cin >> b;
            if (a > b)
            {
                out = '>';
            }
            else if (a < b)
            {
                out = '<';
            }
            else
            {
                out = '=';
            }

            cout << '#' << test_case << ' ' << out << '\n';
        }
    }
}
