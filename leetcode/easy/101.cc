// https://leetcode.com/problems/symmetric-tree/

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
  bool isSymmetric(TreeNode *root) {
    return !root || bidir_traverse(root->left, root->right);
  }

  bool bidir_traverse(TreeNode *lroot, TreeNode *rroot) {
    if (!lroot || !rroot) return lroot == rroot;

    if (lroot->val != rroot->val) return false;

    return (bidir_traverse(lroot->left, rroot->right) &&
            bidir_traverse(lroot->right, rroot->left));
  }
};
