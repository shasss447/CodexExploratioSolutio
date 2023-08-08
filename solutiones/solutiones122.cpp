 vector<int> minimumTime(int n,vector<vector<int>> &edges,int m)
        {
            vector<int> adj[n+1];
            vector<int> indegree(n+1,0);
            for(auto it : edges)
            {
                adj[it[0]].push_back(it[1]);
                indegree[it[1]]++;
            }
            queue<int> q;
            vector<int> ans(n+1,0);
            for(int i=1;i<=n;i++)
            {
                if(indegree[i]==0)
                {
                    q.push(i);
                    ans[i] = 1;
                }
            }
            while(!q.empty())
            {
                int tmp = q.front();
                q.pop();
                for(auto it:adj[tmp])
                {
                    indegree[it]= indegree[it]-1;
                    if(indegree[it]==0)
                    {
                        q.push(it);
                        ans[it] = ans[tmp] + 1;
                    }
                }
            }
            ans.erase(ans.begin());
            return ans;
            
        }