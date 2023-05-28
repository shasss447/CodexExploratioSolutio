/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
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
         if(temp->left!=NULL)
         q.push(temp->left);
         if(temp->right!=NULL)
         q.push(temp->right);
         q.pop();
       }
       if(!q.empty())
      { Node*temp1=q.front();
       v.push_back(temp1->data);}
   }
   return v;
}