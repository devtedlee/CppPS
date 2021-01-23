#pragma once

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1290. Convert Binary Number in a Linked List to Integer
    /// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
    /// </summary>
    class Q1290
    {
    public:
        struct ListNode {
            int val;
            ListNode* next;
            ListNode() : val(0), next(nullptr) {}
            ListNode(int x) : val(x), next(nullptr) {}
            ListNode(int x, ListNode* next) : val(x), next(next) {}
        };
        int getDecimalValue(ListNode* head) {
            int val = 0;
            while (head != nullptr)
            {
                val <<= 1;
                val ^= head->val;

                head = head->next;
            }

            return val;
        }
    };
}