#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1365. How Many Numbers Are Smaller Than the Current Number
    /// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
    /// </summary>
    class Q1365
    {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> v(101, 0);
            for (int i = 0; i < nums.size(); ++i)
                v[nums[i]]++;

            for (int i = 1; i < v.size(); ++i)
                v[i] += v[i - 1];

            //��ó�� ����� ����

            vector<int> result(nums.size());
            for (int i = 0; i < nums.size(); ++i)
            {
                if (nums[i] != 0) // ���� 0�̸� v���� �����߻�
                    result[i] = v[nums[i] - 1];
            }

            return result;
        }
    };
}