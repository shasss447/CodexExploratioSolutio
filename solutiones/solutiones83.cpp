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
int ar(vector<int>&inorder,int strt,int end,int curr)
{
    for(int i=strt;i<=end;i++)
    { 
        if(inorder[i]==curr)
        return i;
    }
    return -1;
}
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int& idx,int strt,int end,int n)
    {
        if(strt>end||idx>=n)
        return NULL;
        int curr=preorder[idx];
        TreeNode* node=new TreeNode(curr);
        idx++;
        if(strt==end)
        return node;
        int pos=ar(inorder,strt,end,curr);
        node->left=build(preorder,inorder,idx,strt,pos-1,n);
        node->right=build(preorder,inorder,idx,pos+1,end,n);
        return node;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int idx=0;
        return build(preorder,inorder,idx,0,n-1,n);
    }
};