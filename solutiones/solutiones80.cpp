bool df(vector<int> adj[], vector<int>& visit,vector<int>&dvisit, int i) 
    {
    visit[i] = 1;
    dvisit[i]=1;
    for(auto j:adj[i])
    {
        if(!visit[j])
        {
            if(df(adj,visit,dvisit,j))
            return 1;
        }
        else if(dvisit[j])
        return 1;
    }
    dvisit[i]=0;
    return 0;
}
    bool isCyclic(int V, vector<int> adj[]) {
       vector<int>visit(V,0);
       vector<int>dvisit(V,0);
       for(int i=0;i<V;i++)
       {
           if(!visit[i])
           {
               if(df(adj,visit,dvisit,i))
               return 1;
           }
       }
       return 0;
       
    }