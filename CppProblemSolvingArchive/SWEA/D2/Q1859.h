#pragma once

#include<iostream>

using namespace std;

/*
    1859. �鸸 ���� ������Ʈ
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE
*/

namespace d2
{
    class Q1859
    {
    public:
        Q1859();
        void Solution();
    };

    void Q1859::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int n;
            cin >> n;
            int* arr = new int[n] {0, };

            for (int i = 0; i < n; ++i)
            {
                cin >> arr[i];
            }
            /////////////////////////////////////////////////////////////////////////////////////////////
            /*
                1. ���� �ε��� 0���� ����
                2. ���� �ε��� ���� ��� �迭���� max �ε��� ã��
                3. ���� �ε������� max�ε������� ��ȸ�ϸ鼭 sellSum�� ���� ���ϱ�
                4. ���� �ε����� �ƽ��� �ε��� �������� ���� �� 1 ~ 3 �ݺ�
                5. ���� �ε����� ��ü �ֹ����� n�� ������ ����
             */
             /////////////////////////////////////////////////////////////////////////////////////////////

            long sellSum = 0;
            int start = 0;
            while (start < n)
            {
                int max = arr[start];
                int maxIdx = start;
                for (int j = start + 1; j < n; ++j)
                {
                    if (arr[j] >= max)
                    {
                        max = arr[j];
                        maxIdx = j;
                    }
                }

                for (int j = start; j < maxIdx; ++j)
                {
                    sellSum += (long)max - arr[j];
                }

                start = maxIdx + 1;
            }

            cout << '#' << test_case << ' ' << sellSum << '\n';

            delete[] arr;
            arr = 0;
        }
    }
}
