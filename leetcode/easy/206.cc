// https://leetcode.com/problems/reverse-linked-list/

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
class IterativeSolution {
 public:
  ListNode *reverseList(ListNode *head) {
    ListNode *prev = nullptr;
    ListNode *it = head;
    while (it) {
      auto next = it->next;
      it->next = prev;
      prev = it;
      it = next;
    }
    return prev;
  }
};

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
class RecursiveSolution {
  ListNode *ans = nullptr;

 public:
  ListNode *reverseList(ListNode *head) {
    compute(head);
    return ans;
  }

  ListNode *compute(ListNode *head) {
    if (!head || !head->next) {
      ans = head;
      return ans;
    }
    auto n = compute(head->next);
    head->next = nullptr;
    n->next = head;
    n = n->next;
    return n;
  }
};
