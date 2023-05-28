int minValue(Node* root) {
    // Code here
    if(root==NULL)
    return -1;
    int min=root->data;
    while(root->left!=NULL)
    {
         root=root->left;
          min=root->data;
    }
    return min;
    
}