#pragma once

#include<iostream>

using namespace std;

/*
    2005. ÆÄ½ºÄ®ÀÇ »ï°¢Çü
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5P0-h6Ak4DFAUq
*/

namespace d2
{
    class Q2005
    {
    public:
        void Solution();
    };

    void Q2005::Solution()
    {
        int test_case;
        int T;
        scanf("%d", &T);
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            scanf("%d", &N);
            int arr[13] = { 0, };
            int tmpArr[13] = { 0, };

            printf("#%d\n", test_case);
            for (int i = 0; i < N; ++i)
            {
                for (int j = 0; j < i; ++j)
                {
                    int val = arr[j] + arr[j + 1];
                    printf("%d ", val);
                    tmpArr[j + 1] = val;
                }
                printf("%d\n", 1);

                tmpArr[i + 1] = 1;
                for (int j = 0; j < i + 2; ++j)
                {
                    arr[j] = tmpArr[j];
                }
            }
        }
    }
}
