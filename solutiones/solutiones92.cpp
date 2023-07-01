 void count(struct Node*node,vector<int>&v,int n)
    {
        if(node==NULL)
        {
            v.push_back(n);
            return;
        }
        count(node->left,v,n+1);
        count(node->right,v,n+1);

    }
    int height(struct Node* node){
        // code here
        vector<int>v;
        count(node,v,0);
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }