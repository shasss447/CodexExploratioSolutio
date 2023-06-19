bool isc(int V,vector<int>adj[],int i,vector<int>&visit,int cparent)
    {
        visit[i]=1;
        for(int j:adj[i])
        {
            if (!visit[j]) 
            { 
            if (isc(V, adj, j, visit, i))
                return true;
            } 
        else if (j != cparent) 
            return true;
        }
        return 0;
    }
    bool isCycle(int V, vector<int> adj[]) 
    {
        // Code here
        vector<int>visit(V,0);
        for(int i=0;i<V;i++)
        {
            if(!visit[i])
            {
                if(isc(V,adj,i,visit,-1))
                return 1;
            }
        }
        return 0;
    }