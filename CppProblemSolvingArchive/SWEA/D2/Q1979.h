#pragma once

#include <iostream>

using namespace std;

/*
    1979. 어디에 단어가 들어갈 수 있을까
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PuPq6AaQDFAUq&categoryId=AV5PuPq6AaQDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1979
    {
    public:
        void Solution();
    };

    void Q1979::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int puzzle[17][17] = { {0, } };
            int N, K;
            cin >> N;
            cin >> K;
            for (int i = 1; i <= N; ++i)
                for (int j = 1; j <= N; ++j)
                    cin >> puzzle[j][i];

            int kCount = 0;
            for (int y = 1; y <= N; ++y)
            {
                for (int x = 1; x <= N; ++x)
                {
                    int block = puzzle[x][y];
                    if (block == 1)
                    {
                        if (puzzle[x - 1][y] != 1)
                        {
                            int count = 1;
                            for (int i = x + 1; i <= N; ++i)
                            {
                                if (puzzle[i][y] != 1)
                                    break;

                                ++count;
                            }
                            if (count == K)
                                ++kCount;
                        }
                        if (puzzle[x][y - 1] != 1)
                        {
                            int count = 1;
                            for (int i = y + 1; i <= N; ++i)
                            {
                                if (puzzle[x][i] != 1)
                                    break;

                                ++count;
                            }
                            if (count == K)
                                ++kCount;
                        }
                    }
                }
            }

            cout << '#' << test_case << ' ' << kCount << '\n';
        }
    }
}
