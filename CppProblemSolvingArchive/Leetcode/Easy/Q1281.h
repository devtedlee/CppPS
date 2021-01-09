#pragma once

#include <cstdio>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1281. Subtract the Product and Sum of Digits of an Integer
    /// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
    /// </summary>
    class Q1281
    {
    public:
        int subtractProductAndSum(int n) {
            char arr[8];
            sprintf(arr, "%d", n);
            int productOfDigits = 1;
            int sumOfDigits = 0;

            int i = 0;
            while (arr[i] != '\0')
            {
                int num = static_cast<int>(arr[i] - '0');
                productOfDigits *= num;
                sumOfDigits += num;

                ++i;
            }

            return productOfDigits - sumOfDigits;
        }
    };
}