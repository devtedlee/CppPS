#pragma once

#include<iostream>

using namespace std;

/*
    1284. 수도 요금 경쟁
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
            cin >> P; // A사의 1L당 요금
            cin >> Q; // B사의 R리터 이하 기본요금
            cin >> R; // B사의 기본요금 기준 L양
            cin >> S; // B사의 R리터 초과 1L당 요금
            cin >> W; // 집주인의 한달 수도 사용량 (단위 L)

            /*
                1. A사 요금 구하기: W * P
                2. B사 요금 구하기
                    2-1. W가 R이하라면: B사 요금은 Q
                    2-2. W가 R초과라면: B사 요금은 Q + ((W - R) * S)
                3. A사와 B사 요금 비교 후 더 저렴한 회사의 수도요금 출력
            */

            int aFee = W * P;
            int bFee = W <= R
                ? Q
                : Q + ((W - R) * S);

            int result = aFee <= bFee ? aFee : bFee;

            cout << '#' << test_case << ' ' << result << '\n';
    }
}
