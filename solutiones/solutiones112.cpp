int mindis(vector<int>&dist,vector<bool>&set,int v)
	{
	    int min=INT_MAX,minI;
	    for(int i=0;i<v;i++)
	    {
	        if(!set[i]&&dist[i]<=min)
	        {
	            minI=i;
	            min=dist[i];
	        }
	    }
	    return minI;
	}
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        vector<bool>set(V,0);
        dist[S]=0;
        for(int i=0;i<V;i++)
        {
            int u=mindis(dist,set,V);
            set[u]=1;
           for(auto neigh:adj[u])
           {
               if(!set[neigh[0]]&&dist[u]!=INT_MAX&&dist[u]+neigh[1]<dist[neigh[0]])
               dist[neigh[0]]=dist[u]+neigh[1];
           }
            
        }
        return dist;
    }