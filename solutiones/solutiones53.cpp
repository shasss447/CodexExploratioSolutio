class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool iso(Node *root1,Node *root2)
    {
        if(!root1&&!root2)
        return 1;
        if(root1->data!=root2->data&&root)
        return 0;
        if(root1->left->data==root2->left->data&&root1->right->data==root2->right->data)
        return 1;
        
    }
    bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
    if(!root1&&!root2)
    return 1;
    if(iso(root1,root2))
    return 1;
    
    }