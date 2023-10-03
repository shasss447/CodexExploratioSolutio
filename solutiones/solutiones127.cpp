class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>>&visit,int m,int n)
    {
        if(i<0||i>=m||j<0||j>=n||grid[i][j]=='0'||visit[i][j])
        return;
        visit[i][j]=1;
        int r[8]={1,1,1,0,0,-1,-1,-1};
        int c[8]={-1,0,1,-1,1,-1,0,1};
        for(int k=0;k<8;k++)
        dfs(i+r[k],j+c[k],grid,visit,m,n);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>visit(m,vector<bool>(n,0));
        int ct=0;
       
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1'&&!visit[i][j])
                {
                    dfs(i,j,grid,visit,m,n);
                    ct++;
                }
            }
        }
        return ct;
    }
};