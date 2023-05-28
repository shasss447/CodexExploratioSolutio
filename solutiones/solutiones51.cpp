class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node*root)
    {
        if(!root)
        return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        if(lh==-1||rh==-1)
        return -1;
        if(abs(lh-rh)>1)
        return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return height(root)==-1?0:1;
    }