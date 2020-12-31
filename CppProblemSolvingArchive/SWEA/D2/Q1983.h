#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

static int compare(const void* a, const void* b)
{
    if (*(double*)a < *(double*)b) return 1;
    else if (*(double*)a > *(double*)b) return -1;
    else return 0;
}
/*
    1983. 조교의 성적 매기기 
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PwGK6AcIDFAUq&categoryId=AV5PwGK6AcIDFAUq&categoryType=CODE

    리뷰
    1. sort 이후의 출력이 생각대로 작동하지 않아서 시간이 지연됐으나 알고보니 sort가 정상 작동되고 있었음
    2. qsort 같은 메서드는 array와 상성이 좋으니 피지컬 숙련도를 높이면 c++ PS에 좋겠다.
    3. PS 플랫폼에서 스택배열을 엉망으로 써도 받아주는데 이 부분은 스스로 엄격하게 제한해서 힙메모리 배열을 쓰도록 하자
*/

namespace d2
{
    class Q1983
    {
    public:
        void Solution();
    };

    void Q1983::Solution()
    {
        int test_case;
        int T;
        cin >> T;

        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N, K;
            cin >> N;
            cin >> K;
            int input[3][N];

            for (int i = 0; i < N; ++i)
                for (int j = 0; j < 3; ++j)
                    cin >> input[j][i];

            double totals[N];
            for (int i = 0; i < N; ++i)
            {
                double sum = (double)input[0][i] * 0.35;
                sum += (double)input[1][i] * 0.45;
                sum += (double)input[2][i] * 0.2;
                totals[i] = sum;
            }

            double kTotal = totals[K - 1];

            qsort(totals, N, sizeof(double), compare);

            int kGrade;
            for (int i = 0; i < N; ++i)
            {
                if (totals[i] == kTotal)
                {
                    kGrade = i / (N / 10);
                    break;
                }
            }

            const char gradeTable[10][2] = { {'A', '+'}, {'A', '0'}, {'A', '-'}, {'B', '+'}, {'B', '0'}, {'B', '-'}, {'C', '+'}, {'C', '0'}, {'C', '-'}, {'D', '0'} };

            cout << '#' << test_case << ' ' << gradeTable[kGrade][0] << gradeTable[kGrade][1] << '\n';
    }
}
