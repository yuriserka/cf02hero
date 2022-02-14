// https://leetcode.com/problems/deepest-leaves-sum/

#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 private:
  int max_depth;

 public:
  int deepestLeavesSum(TreeNode *root) {
    max_depth = h(root);
    return aux(root, 1);
  }

  int aux(TreeNode *root, int depth) {
    if (!root) return 0;
    if (!root->left && !root->right) return depth == max_depth ? root->val : 0;
    return aux(root->left, depth + 1) + aux(root->right, depth + 1);
  }

  int h(TreeNode *root) {
    if (!root) return 0;
    return 1 + max(h(root->left), h(root->right));
  }

  int max(int a, int b) { return a > b ? a : b; }
};