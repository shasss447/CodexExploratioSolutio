vector<int> bfsOfGraph(int V, vector<int> adj[]) 
    {
        // Code here
        vector<int>v;
        queue<int>q;
        vector<bool>visit(V, false);
        q.push(0);
        visit[0]=1;
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            for(int i=0;i<adj[n].size();i++)
            {
              int a=adj[n][i];
              if(!visit[a])
               {
                 q.push(a);
                 visit[a]=1;
               }
            }
            v.push_back(n);
        }
        return v;
    }