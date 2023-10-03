class Solution
{
	public:
	//Function to ind sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
       priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> >pq;
        pq.push({0, 0});
        vector<int>vis(V, 0);
        int sum=0;
        
        while(!pq.empty()){
            int node=pq.top().second;
            int wt=pq.top().first;
            pq.pop();
            
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            
            for(auto it:adj[node]){
                int adjNode=it[0];
                int adjW=it[1];
                if(vis[adjNode]!=1){
                    pq.push({adjW, adjNode});
                }
            }
        }
        return sum;
    }
};