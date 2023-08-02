void topo(int a,vector<int>adj[],vector<int>& visit,stack<int>&st)
	{
	    visit[a]=1;
	    for(auto k:adj[a])
	    {
	        if(!visit[k])
	        {
	            topo(k,adj,visit,st);
	        }
	    }
	    st.push(a);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	  vector<int>visit(V,0);
	   vector<int>ans;
	   stack<int>st;
	   for(int i=0;i<V;i++)
	   {
	       if(!visit[i])
	       topo(i,adj,visit,st);
	   }
	   while(!st.empty())
	   {
	       ans.push_back(st.top());
	       st.pop();
	   }
	   return ans;
	}