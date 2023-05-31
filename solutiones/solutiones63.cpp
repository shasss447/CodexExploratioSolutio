class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int x,vector<int>adj[],vector<int>&v,vector<bool>&visit)
    {
        v.push_back(x);
        visit[x]=true;
        for(int i=0;i<adj[x].size();i++)
        {
            int y=adj[x][i];
            if(visit[y]!=1)
            dfs(y,adj,v,visit);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int>v;
      vector<bool>visit(V,false);
      dfs(0,adj,v,visit);
      return v;
    }
};