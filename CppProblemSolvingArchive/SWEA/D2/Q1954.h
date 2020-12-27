#pragma once

#include<iostream>

using namespace std;

/*
    1954. ´ÞÆØÀÌ ¼ýÀÚ
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PobmqAPoDFAUq&categoryId=AV5PobmqAPoDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1954
    {
    public:
        Q1954();
        void Solution();
    };

    void Q1954::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int n = 0;
            cin >> n;
            int square[n][n];

            int squareLen = n * n;
            int loopCount = n;
            int num = 1;
            int x = -1;
            int y = 0;
            while (num <= squareLen)
            {
                int i;
                //right
                for (i = 0; i < loopCount; ++i)
                {
                    ++x;
                    square[x][y] = num;
                    ++num;
                }

                --loopCount;
                if (loopCount == 0)
                    break;

                //down
                for (i = 0; i < loopCount; ++i)
                {
                    ++y;
                    square[x][y] = num;
                    ++num;
                }

                //left
                for (i = 0; i < loopCount; ++i)
                {
                    --x;
                    square[x][y] = num;
                    ++num;
                }

                --loopCount;
                if (loopCount == 0)
                    break;

                //up
                for (i = 0; i < loopCount; ++i)
                {
                    --y;
                    square[x][y] = num;
                    ++num;
                }
            }

            cout << '#' << test_case << ' ' << '\n';
            for (int y = 0; y < n; ++y)
            {
                for (int x = 0; x < n; ++x)
                {
                    cout << square[x][y] << ' ';
                }
                cout << '\n';
            }
        }
    }
}
