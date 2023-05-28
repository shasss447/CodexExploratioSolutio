struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(root==NULL)
   return {};
   queue<Node*>q;
   vector<int>v;
   q.push(root);
   v.push_back(root->data);
   while(!q.empty())
   {
       int n=q.size();
       while(n--)
       {
         Node*temp=q.front();
         if(temp->right!=NULL)
         q.push(temp->right);
         if(temp->left!=NULL)
         q.push(temp->left);
         q.pop();
       }
       if(!q.empty())
      { Node*temp1=q.front();
       v.push_back(temp1->data);}
   }
   return v;
    }