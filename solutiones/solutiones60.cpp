void inorder(Node*root,vector<Node*>&v1,vector<int>&v2)
    {
        if(!root)
        return;
        inorder(root->left,v1,v2);
        v1.push_back(root);
        v2.push_back(root->data);
        inorder(root->right,v1,v2);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        Node*head=root;
        vector<Node*>v1;
        vector<int>v2;
        inorder(root,v1,v2);
        sort(v2.begin(), v2.end());
        for(int i=0;i<v1.size();i++)
        {
            v1[i]->data=v2[i];
        }
        return head;
    }