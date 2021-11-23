// https://leetcode.com/problems/minimum-depth-of-binary-tree/

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
  int minDepth(TreeNode* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;

    if (!root->left) return minDepth(root->right) + 1;
    if (!root->right) return minDepth(root->left) + 1;

    int ls = minDepth(root->left);
    int rs = minDepth(root->right);

    return 1 + min(ls, rs);
  }

  int min(int a, int b) { return a < b ? a : b; }
};