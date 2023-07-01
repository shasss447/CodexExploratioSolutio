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
    bool is(TreeNode*root,long max,long min)
    {
        if(root==nullptr)
        return 1;
        if(root->val<max&&root->val>min)
        return is(root->left,root->val,min)&&is(root->right,max,root->val);
        return 0;
    }
    bool isValidBST(TreeNode* root) {
        return is(root,LONG_MAX,LONG_MIN);
    }
};