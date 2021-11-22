// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
  ListNode* deleteDuplicates(ListNode* head) {
    int curr = head ? head->val : INT_MAX;
    int occ = 0;
    ListNode* it = head;
    ListNode* prev = head;
    while (it) {
      if (it->val != curr) {
        curr = it->val;
        occ = 1;
      } else {
        ++occ;
      }
      if (occ >= 2) {
        if (prev == it) {
          head = it->next;
          prev = head;
        } else {
          prev->next = it->next;
        }
      } else {
        prev = it;
      }
      it = it->next;
    }
    return head;
  }
};