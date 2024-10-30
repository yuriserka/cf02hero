// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *it = head;
        while (it && it->next) {
            ListNode *next = it->next;
            it->next = new ListNode(gcd(it->val, next->val), next);
            it = next;
        }
        return head;
    }
};