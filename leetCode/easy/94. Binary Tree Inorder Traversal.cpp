/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ret;
    vector<int> inorderTraversal(TreeNode* root) {
        recursion(root);
        return ret;
    }

    void recursion(TreeNode* root) {
        if (root == nullptr) return;
        inorderTraversal(root->left);
        ret.push_back(root->val);
        inorderTraversal(root->right);
    }
};