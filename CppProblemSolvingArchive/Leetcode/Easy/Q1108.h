#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1108. Defanging an IP Address
    /// https://leetcode.com/problems/defanging-an-ip-address/
    /// </summary>
    class Q1470
    {
    public:
        string defangIPaddr(string address) {
            string s;
            for (int i = 0; i < address.length(); ++i)
            {
                if (address[i] != '.')
                    s += address[i];
                else
                    s.append("[.]");
            }

            return s;
        }
    };
}