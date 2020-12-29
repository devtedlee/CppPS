#pragma once

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/*
    2056. ������ �޷�
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5QLkdKAz4DFAUq
*/

namespace d1
{
    class Q2056
    {
    public:
        void Solution();
    };

    void Q2056::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            /*
                ����
                �� 0000 ~ 9999
                �� 01 ~ 12
                �� 01 ~ 31
                ������ ��� ��¥���� ������ �ٸ�
                1,3,5,7,8,10,12 -> 31��
                2 -> 28��
                2, 4, 6, 9, 11 -> 30��
            */
            const int MONTH_DAYS[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

            char input[9];
            input[8] = '\0';
            scanf("%s", input);

            char year[5];
            memcpy(&year, &input, 4);
            year[4] = '\0';

            char month[3];
            memcpy(&month, &input[4], 2);
            month[2] = '\0';

            char day[3];
            memcpy(&day, &input[6], 2);
            day[2] = '\0';

            int monthNum = stoi(month);
            if (monthNum < 1 || monthNum > 12)
            {
                printf("#%d %d\n", test_case, -1);
                continue;
            }

            int dayNum = stoi(day);
            if (dayNum < 1 || dayNum > MONTH_DAYS[monthNum - 1])
            {
                printf("#%d %d\n", test_case, -1);
                continue;
            }

            printf("#%d %s/%s/%s\n", test_case, year, month, day);
        }
    }
}
