class Solution{
  public:
    /*You are required to complete this method*/
    void leave(Node*root,vector<int>&v)
    {
         if(root==NULL) return ;
    leave(root->left,v);
    leave(root->right,v);
    if(root->left==NULL&&root->right==NULL)
        {
            v.push_back(root->data);
            return;
        }
    }
    bool check(Node *root)
    {
        //Your code here
        vector<int>v;
        leave(root,v);
        map<int,vector<int>>mp;
        queue<Node*>q;
        q.push(root);
        int a=0;
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                Node*temp=q.front();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                mp[a].push_back(temp->data);
                q.pop();
            }
            a++;
        }
        if(v.size()==mp[a-1].size())
        return 1;
        else
        return 0;
    }