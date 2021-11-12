// https://leetcode.com/problems/remove-linked-list-elements/

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
  ListNode* removeElements(ListNode* head, int val) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode* prev = head;
    ListNode* it = head;
    while (it) {
      if (it->val == val) {
        if (prev == it) {
          head = it->next;
          prev = head;
        } else
          prev->next = it->next;
      } else {
        prev = it;
      }
      it = it->next;
    }
    return head;
  }
};