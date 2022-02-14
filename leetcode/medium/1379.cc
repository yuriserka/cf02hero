// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/

#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
 public:
  TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,
                          TreeNode* target) {
    if (!original || !cloned) return nullptr;
    if (original->val == target->val) return cloned;

    TreeNode* vl = getTargetCopy(original->left, cloned->left, target);
    if (vl) return vl;

    TreeNode* vr = getTargetCopy(original->right, cloned->right, target);
    if (vr) return vr;

    return nullptr;
  }
};