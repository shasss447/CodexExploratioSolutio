/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void helo(Node*root,vector<int>&v)
{
    if(root==NULL)
    return;
    helo(root->left,v);
    helo(root->right,v);
    v.push_back(root->data);
    return;
}

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>v;
    helo(root,v);
    return v;
}