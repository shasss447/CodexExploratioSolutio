 void inorder(Node*root,vector<int>&v)
    {
        if(!root)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int>v;
        inorder(root,v);
        return v[v.size()-K];
    }