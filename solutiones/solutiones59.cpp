void dead(Node*root,pair<int,int>p,bool&a)
{
    if(!root)
    return;
    if(!root->left&&!root->right&&p.second-p.first==0)
    a=1;
    dead(root->left,{p.first,root->data-1},a);
    dead(root->right,{root->data+1,p.second},a);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    pair<int,int>p={1,INT_MAX};
    bool a=0;
    dead(root,p,a);
    return a;
}