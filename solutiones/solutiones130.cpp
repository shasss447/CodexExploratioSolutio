class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int f(int n,int x,int y,int z,vector<int>&dp)
    {
        if(n<0)
        return INT_MIN;
        if(n==0)
        return dp[n]=0;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=1+max(f(n-x,x,y,z,dp),max(f(n-y,x,y,z,dp),f(n-z,x,y,z,dp)));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int>dp(n+1,-1);
        int a=f(n,x,y,z,dp);
        if(a<0)
        return 0;
        return a;
    }
};