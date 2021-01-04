#pragma once

#include <iostream>

using namespace std;

/*
    1976. ½Ã°¢ µ¡¼À
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PttaaAZIDFAUq&categoryId=AV5PttaaAZIDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1976
    {
    public:
        void Solution();
    };

    void Q1976::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int hour1, hour2;
            int min1, min2;
            cin >> hour1;
            cin >> min1;
            cin >> hour2;
            cin >> min2;

            int hour = hour1 + hour2;
            int min = min1 + min2;

            if (min > 59)
            {
                min %= 60;
                ++hour;
            }

            if (hour > 12)
                hour = hour % 13 + 1;

            cout << '#' << test_case << ' ' << hour << ' ' << min << '\n';
        }
    }
}
