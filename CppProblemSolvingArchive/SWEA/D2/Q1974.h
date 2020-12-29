#pragma once

#include<iostream>

using namespace std;

/*
    1974. 스도쿠 검증
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5Psz16AYEDFAUq
*/

namespace d2
{
    class Q1974
    {
    public:
        void Solution();
    };

    void Q1974::Solution()
    {
        int test_case;
        int T;
        scanf("%d", &T);
        for (test_case = 1; test_case <= T; ++test_case)
        {
            /*
                 1. 가로 검증
                 2. 세로 검증
                 3. 사각형 검증
             */
            const int LEN = 9;
            const int SUM = 45;
            const int MUL = 362880;
            int sudoku[10][10]{};
            for (int y = 0; y < LEN; ++y)
                for (int x = 0; x < LEN; ++x)
                    scanf("%d", &sudoku[x][y]);

            int result = 0;

            for (int i = 0; i < LEN; ++i)
            {
                int colSum = 0;
                int rowSum = 0;
                int colMul = 1;
                int rowMul = 1;
                for (int j = 0; j < LEN; ++j)
                {
                    rowSum += sudoku[j][i];
                    rowMul *= sudoku[j][i];

                    colSum += sudoku[i][j];
                    colMul *= sudoku[i][j];
                }

                if (rowSum != SUM || rowMul != MUL || colSum != SUM || colMul != MUL)
                    goto end_validation;
            }

            for (int r = 0; r < 9; r += 3)
            {
                for (int c = 0; c < 9; c += 3)
                {
                    int sum = 0;
                    int mul = 1;
                    for (int y = r; y < r + 3; ++y)
                    {
                        for (int x = c; x < c + 3; ++x)
                        {
                            sum += sudoku[x][y];
                            mul *= sudoku[x][y];
                        }
                    }

                    if (sum != SUM || mul != MUL)
                        goto end_validation;
                }
            }

            result = 1;

        end_validation:
            printf("#%d %d\n", test_case, result);
    }
}
