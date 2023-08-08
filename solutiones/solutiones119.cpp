int nCr(int n, int r){
        // code here
        int m=1e9+7;
        vector<vector<int>>dp(n+1,vector<int>(r+1,0));
        for(int i=0;i<n+1;i++)
        dp[i][0]=1;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<=min(i,r);j++)
            dp[i][j]=(dp[i-1][j]%m+dp[i-1][j-1]%m)%m;
        }
        return dp[n][r];
    }