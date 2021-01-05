#pragma once

#include <iostream>
#include <string>

using namespace std;

/*
    1928. Base64 Decoder
    https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV5PR4DKAG0DFAUq
*/

namespace d2
{
    typedef struct bits
    {
        unsigned int bit3 : 6;
        unsigned int bit2 : 6;
        unsigned int bit1 : 6;
        unsigned int bit0 : 6;
    } bits_t;

    typedef union container
    {
        bits_t bits;
        char chars[3];
    } container_t;

    class Q1928
    {
    public:
        unsigned int decodeBase64(char character);
        void Solution();
    };

    unsigned int Q1928::decodeBase64(char character)
    {
        unsigned int result = 0;
        if (character >= 'A' && character <= 'Z')
        {
            result = character - 'A';
        }
        else if (character >= 'a' && character <= 'z')
        {
            result = character - 'a' + 26;
        }
        else if (character >= '0' && character <= '9')
        {
            result = character - '0' + 52;
        }
        else if (character == '+')
        {
            result = 62u;
        }
        else if (character == '/')
        {
            result = 63u;
        }

        return result;
    }

    void Q1928::Solution()
    {
        int test_case;
        int T;
        cin >> T;
        string buffer;
        for (test_case = 1; test_case <= T; ++test_case)
        {
            cin >> buffer;
            container_t container;
            cout << '#' << test_case << ' ';
            for (int i = 0; buffer[i] != '\0'; i += 4)
            {
                container.bits.bit0 = decodeBase64(buffer[i]);
                container.bits.bit1 = decodeBase64(buffer[i + 1]);
                container.bits.bit2 = decodeBase64(buffer[i + 2]);
                container.bits.bit3 = decodeBase64(buffer[i + 3]);

                cout << container.chars[2] << container.chars[1] << container.chars[0];
            }
            cout << '\n';
        }
    }
}
