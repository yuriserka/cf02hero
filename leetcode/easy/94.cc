// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
  vector<int> ans;

 public:
  vector<int> inorderTraversal(TreeNode* root) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!root) return {};
    inorderTraversal(root->left);
    ans.push_back(root->val);
    inorderTraversal(root->right);
    return ans;
  }
};