#pragma once

#include <iostream>

using namespace std;

/*
    1966. 숫자를 정렬하자
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PrmyKAWEDFAUq&categoryId=AV5PrmyKAWEDFAUq&categoryType=CODE
*/

namespace d2
{
    class Q1966
    {
    public:
        void insertionSort(int arr[], int arrLen);
        void Solution();
    };

    void Q1966::insertionSort(int arr[], int arrLen)
    {
        for (int i = 1; i < arrLen; ++i)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] >= temp)
            {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = temp;
        }
    }

    void Q1966::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int N;
            int arr[50];
            cin >> N;

            for (int i = 0; i < N; ++i)
                cin >> arr[i];

            insertionSort(arr, N);

            cout << '#' << test_case << ' ';
            for (int i = 0; i < N; ++i)
                cout << arr[i] << ' ';
            cout << '\n';
        }
    }
}
