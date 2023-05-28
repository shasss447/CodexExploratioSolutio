class Solution {
  public:
    int convert(Node* root){
       
       if(!root)
       return 0;
       
       int l = convert(root->left);
       int r = convert(root->right);
       
       int d = root->data;
       root->data = l + r;
       
       return (d + l + r);
       
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
       if(!node)
        return;
        
        convert(node);
        
    }