bool isValid(int &n,int &m,int currr,int currc)
    {
        return currr>=0&&currr<n&&currc>=0;currc<m;
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int dx[]={-1,0,1};
        int dy[]={1,1,1};
        for(int i=0;i<n;i++)
        dp[i][m-1]=M[i][m-1];
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                int mx=0;
                for(int k=0;k<3;k++)
                {
                  int nr=j+dx[k];
                  int nc=i+dy[k];
                  if(isValid(n,m,nr,nc))
                  {
                      mx=max(mx,dp[nr][nc]);
                  }
                }
                dp[j][i]=M[j][i]+mx;
            }
        }
        int mx=0;
        for(int i=0;i<n;i++)
        mx=max(dp[i][0],mx);
        return mx;
    }