class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        for(int i=0;i<k+1;i++)
        dp[1][i]=i;
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
            dp[i][1]=1;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=k;j++)
            {
                dp[i][j]=INT_MAX;
                for(int x=1;x<=k;x++)
                {
                    int Break=dp[i-1][x-1];
                    int nobreak=dp[i][j-x];
                    int attempt=1+max(Break,nobreak);
                    dp[i][j]=min(dp[i][j],attempt);
                }
            }
        }
        return dp[n][k];
    }
};