#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
    2058. 자릿수 더하기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPRjqA10DFAUq&categoryId=AV5QPRjqA10DFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2058
    {
    public:
        Q2058();
        void Solution();
    };

    void Q2058::Solution()
    {
        int n;
        cin >> n;
        string numStr = to_string(n);
        int strLen = numStr.length();
        int sum = 0;
        for (int i = 0; i < strLen; ++i)
        {
            int num = numStr[i] - '0';
            sum += num;
        }

        cout << sum;
    }
}
