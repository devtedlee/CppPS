#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
    2007. 패턴 마디의 길이
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
                 해결책1: hashmap에 다 담아버리기. 고려사항 -> 순서대로 출력이 되나?(이거 같은 단어 반복하는 마디 때문에 안됨)
                 해결책2: set에 다 담아버리기. 고려사항 -> 순서대로 출력이 되나?(이거 같은 단어 반복하는 마디 때문에 안됨)
                 해결책3(만약 마디가 처음부터 무조건 시작한다는 가정하에 가능)
                 1. 포인터 두개. p1, p2.
                 2. p1과 일치하는 char를 찾을때까지 p2전진.
                 3. 일치하면 p1~p2까지의 길이를 length로 정하고 계속 일치하는지 확인. 일치하면 마디로 등록.
                 4. 일치 안하면 p2계속 전진. 마디 찾을때까지
                 5. 마디 찾으면 그냥 출력 후 종료.

                 유의사항1: 문제 조건이 허술해서 풀이도 허술함.
                 유의사항2: 해결책과 코드가 일치하지 않음
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
