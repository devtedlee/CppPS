#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
    2007. ���� ������ ����
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5P1kNKAl8DFAUq&categoryId=AV5P1kNKAl8DFAUq&categoryType=CODE
*/

namespace d2
{
    class Q2007
    {
    public:
        Q2007();
        void Solution();
    };

    void Q2007::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            char str[31];
            cin >> str;
            /*
                 �ذ�å1: hashmap�� �� ��ƹ�����. ������� -> ������� ����� �ǳ�?(�̰� ���� �ܾ� �ݺ��ϴ� ���� ������ �ȵ�)
                 �ذ�å2: set�� �� ��ƹ�����. ������� -> ������� ����� �ǳ�?(�̰� ���� �ܾ� �ݺ��ϴ� ���� ������ �ȵ�)
                 �ذ�å3(���� ���� ó������ ������ �����Ѵٴ� �����Ͽ� ����)
                 1. ������ �ΰ�. p1, p2.
                 2. p1�� ��ġ�ϴ� char�� ã�������� p2����.
                 3. ��ġ�ϸ� p1~p2������ ���̸� length�� ���ϰ� ��� ��ġ�ϴ��� Ȯ��. ��ġ�ϸ� ����� ���.
                 4. ��ġ ���ϸ� p2��� ����. ���� ã��������
                 5. ���� ã���� �׳� ��� �� ����.

                 ���ǻ���1: ���� ������ ����ؼ� Ǯ�̵� �����.
                 ���ǻ���2: �ذ�å�� �ڵ尡 ��ġ���� ����
             */
            int start = 0;
            int length = 0;
            for (int i = 1; i < 30; ++i)
            {
                if (str[start] == str[i])
                {
                    length = i;

                    if (strncmp(&str[0], &str[i], i) == 0)
                    {
                        str[i] = '\0';
                        break;
                    }
                }
            }

            cout << '#' << test_case << ' ' << length << '\n';
    }
}
