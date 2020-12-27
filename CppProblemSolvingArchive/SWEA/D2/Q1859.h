#pragma once

#include<iostream>

using namespace std;

/*
    1859. 백만 장자 프로젝트
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
                1. 시작 인덱스 0으로 시작
                2. 시작 인덱스 뒤의 모든 배열값의 max 인덱스 찾기
                3. 시작 인덱스부터 max인덱스까지 순회하면서 sellSum에 수익 더하기
                4. 시작 인덱스를 맥스값 인덱스 다음으로 선정 후 1 ~ 3 반복
                5. 시작 인덱스가 전체 주문갯수 n을 넘으면 종료
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
