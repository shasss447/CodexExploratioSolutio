 int height(Node* root)
    {
        if(root==NULL)
        return 0;
        return max(height(root->left),height(root->right))+1;
    }
    void D(Node*root,int&mx)
    {
        if(root==NULL)
        return;
        mx=max(height(root->left)+height(root->right)+1,mx);
        D(root->right,mx);
        D(root->left,mx);
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
        return 0;
        int mx=1;
        D(root,mx);
        return mx;
        
        
    }