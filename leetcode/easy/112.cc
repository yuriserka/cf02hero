// https://leetcode.com/problems/path-sum/

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
 public:
  bool hasPathSum(TreeNode *root, int targetSum) {
    bool ans = false;
    hasPathSumRec(root, targetSum, 0, &ans);
    return ans;
  }

  void hasPathSumRec(TreeNode *root, int tgt, int sum, bool *found) {
    if (!root) return;
    sum += root->val;
    hasPathSumRec(root->left, tgt, sum, found);
    hasPathSumRec(root->right, tgt, sum, found);
    if (sum == tgt && !root->left && !root->right) {
      *found = true;
    }
  }
};