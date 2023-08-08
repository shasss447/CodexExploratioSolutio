int f(vector<vector<int>>&dp,int s,int arr[],int n)
    {
        if(dp[n][s]!=-1)
        return dp[n][s];
        if(arr[n-1]<=s)
        return dp[n][s]=f(dp,s-arr[n-1],arr,n-1)||f(dp,s,arr,n-1);
        else 
        return dp[n][s]=f(dp,s,arr,n-1);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<N;i++)
        s+=arr[i];
        if(s%2!=0)
        return 0;
        s=s/2;
        vector<vector<int>>dp(N+1,vector<int>(s+1,-1));
        for(int i=0;i<s+1;i++)
        dp[0][i]=0;
        for(int i=0;i<=N;i++)
        dp[i][0]=1;
        return f(dp,s,arr,N);
    }