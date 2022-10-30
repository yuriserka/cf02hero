// https://leetcode.com/problems/merge-two-sorted-lists/

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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *h1 = l1;
    ListNode *h2 = l2;
    ListNode *res = nullptr;
    ListNode *ans = nullptr;

    ListNode *to_append = cmpAndMove(&h1, &h2);
    ans = res = to_append;

    while (h1 || h2) {
      to_append = cmpAndMove(&h1, &h2);
      res->next = to_append;
      res = res->next;
    }

    return ans;
  }

  ListNode *cmpAndMove(ListNode **h1, ListNode **h2) {
    ListNode *ret = nullptr;

    if (*h1 && *h2) {
      bool h1_is_smaller = (*h1)->val < (*h2)->val;
      ret = h1_is_smaller ? *h1 : *h2;
      if (h1_is_smaller)
        *h1 = (*h1)->next;
      else
        *h2 = (*h2)->next;
    } else if (*h1) {
      ret = *h1;
      *h1 = (*h1)->next;
    } else if (*h2) {
      ret = *h2;
      *h2 = (*h2)->next;
    }

    return ret;
  }
};
