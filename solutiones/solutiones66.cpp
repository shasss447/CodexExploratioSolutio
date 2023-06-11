int ks(int N, int W, int val[], int wt[],vector<vector<int>>&dp)
    {
        if(N==0||W==0)
        return 0;
        if(dp[N][W]!=-1)
        return dp[N][W];
        if(wt[N-1]>W)
        return dp[N][W]=ks(N-1,W,val,wt,dp);
        return max(val[N-1]+ks(N,W-wt[N-1],val,wt,dp),ks(N-1,W,val,wt,dp));
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
     vector<vector<int>>dp(N+1,vector<int>(W+1,0));
     for(int i=1;i<N+1;i++)
     {
         for(int j=1;j<W+1;j++)
         {
             if(wt[i-1]>j)
             dp[i][j]=dp[i-1][j];
             else
             dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
         }
     }