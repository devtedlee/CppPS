#pragma once

#include<iostream>

using namespace std;

/*
    1284. ���� ��� ����
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV189xUaI8UCFAZN&categoryId=AV189xUaI8UCFAZN&categoryType=CODE
*/

namespace d2
{
    class Q1284
    {
    public:
        Q1284();
        void Solution();
    };

    void Q1284::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            int P, Q, R, S, W;
            cin >> P; // A���� 1L�� ���
            cin >> Q; // B���� R���� ���� �⺻���
            cin >> R; // B���� �⺻��� ���� L��
            cin >> S; // B���� R���� �ʰ� 1L�� ���
            cin >> W; // �������� �Ѵ� ���� ��뷮 (���� L)

            /*
                1. A�� ��� ���ϱ�: W * P
                2. B�� ��� ���ϱ�
                    2-1. W�� R���϶��: B�� ����� Q
                    2-2. W�� R�ʰ����: B�� ����� Q + ((W - R) * S)
                3. A��� B�� ��� �� �� �� ������ ȸ���� ������� ���
            */

            int aFee = W * P;
            int bFee = W <= R
                ? Q
                : Q + ((W - R) * S);

            int result = aFee <= bFee ? aFee : bFee;

            cout << '#' << test_case << ' ' << result << '\n';
    }
}
