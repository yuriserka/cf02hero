// https://leetcode.com/problems/add-two-numbers/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode();
        ListNode *current = head;
        int carry = 0;

        while (l1 || l2 || carry) {
            const int v1 = l1 ? l1->val : 0;
            const int v2 = l2 ? l2->val : 0;

            const int sum = v1 + v2 + carry;
            carry = sum / 10;
            const int d = sum % 10;

            current->next = new ListNode(d);
            current = current->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return head->next;
    }
};