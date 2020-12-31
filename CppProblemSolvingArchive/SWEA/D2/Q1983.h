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
    1983. ������ ���� �ű�� 
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PwGK6AcIDFAUq&categoryId=AV5PwGK6AcIDFAUq&categoryType=CODE

    ����
    1. sort ������ ����� ������� �۵����� �ʾƼ� �ð��� ���������� �˰��� sort�� ���� �۵��ǰ� �־���
    2. qsort ���� �޼���� array�� ���� ������ ������ ���õ��� ���̸� c++ PS�� ���ڴ�.
    3. PS �÷������� ���ù迭�� �������� �ᵵ �޾��ִµ� �� �κ��� ������ �����ϰ� �����ؼ� ���޸� �迭�� ������ ����
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
