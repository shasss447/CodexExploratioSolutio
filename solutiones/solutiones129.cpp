class Solution {
public:
    bool Bellmon(vector<vector<int>>&edges, vector<int>&dist)
    {
        bool count = 1;
        
        for(int i=0; i<edges.size(); i++)
        {
            if(dist[edges[i][1]] > dist[edges[i][0]]+edges[i][2])
            {
                dist[edges[i][1]]=dist[edges[i][0]]+edges[i][2];
                count = 0;
            }
        }
        return count;
    }
    int isNegativeWeightCycle(int n, vector<vector<int>>edges){
        // Code here
        
        vector<int>dist(n,1e8);
        dist[0]=0;
        
        for(int i=0; i<n; i++)
        {
            if(Bellmon(edges,dist))
            return 0;
        }
        
        if(!Bellmon(edges,dist))
        return 1;
    }
};