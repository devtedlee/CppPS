#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    2063. 중간값 찾기
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QPsXKA2UDFAUq&categoryId=AV5QPsXKA2UDFAUq&categoryType=CODE
*/

namespace d1
{
    class Q2063
    {
    public:
        void Solution();
    };

    void Q2063::Solution()
    {
        int N;
        cin >> N;
        vector<int> v;

        for (int i = 0; i < N; ++i)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        cout << v[N / 2];
    }
}
