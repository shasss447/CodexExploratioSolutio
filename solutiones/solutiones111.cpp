class Solution {
public:
    void dfs(vector<vector<int>>& adj,int curr, vector<bool>& vis ){
        vis[curr]=true;
        for(auto& node:adj[curr]){
            if(!vis[node]){
                dfs(adj,node,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;

        vector<bool>vis(n,false);
        vector<vector<int>>adj(n);
        for(auto& c:connections){
            adj[c[0]].push_back(c[1]);
            adj[c[1]].push_back(c[0]);
        }
        int conn=-1;
        for(int i=0;i<n;++i){
            if(!vis[i]){
                ++conn;
                dfs(adj,i,vis);
            }
        }
        return conn;
    }
};