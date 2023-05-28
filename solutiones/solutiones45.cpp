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
    void level(queue<TreeNode*>& q, vector<vector<int>>& V) {
    if (q.empty()) {
        return;
    }
    int n = q.size();
    vector<int> v;
    while (n--) {
        TreeNode* node = q.front();
        v.push_back(node->val);
        if (node->left != NULL) {
            q.push(node->left);
        }
        if (node->right != NULL) {
            q.push(node->right);
        }
        q.pop();
    }
    V.push_back(v);
    level(q, V);
}

    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
        return {};
        vector<vector<int>>V;
        queue<TreeNode*>q;
        q.push(root);
        level(q,V);
        return V;

    }
};