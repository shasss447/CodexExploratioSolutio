class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    // Code here
    stack<Node*>c;
    stack<Node*>n;
    vector<int>v;
    bool flag=true;
    c.push(root);
    while(!c.empty())
    {
        int m=c.size();
        while(m--)
        { 
        Node*temp=c.top();
        if(!flag)
        {
            if(temp->right)
            n.push(temp->right);
            if(temp->left)
            n.push(temp->left);
        }
        else
        {
            if(temp->left)
            n.push(temp->left);
            if(temp->right)
            n.push(temp->right);
        }
        v.push_back(temp->data);
        c.pop();
        }
        stack<Node*>t=c;
        c=n;
        n=t;
        flag=!flag;
    }
    return v;
    }