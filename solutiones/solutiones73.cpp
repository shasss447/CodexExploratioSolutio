int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here   
        sort(arr, arr+N);
        int dp[N]={0};
        if(arr[1]-arr[0]<K)
        dp[1]=arr[1]+arr[0];
        else
        dp[1]=0;
        for(int i=2;i<N;i++)
        {
            if(arr[i]-arr[i-1]<K)
            dp[i]=max(dp[i-2]+arr[i]+arr[i-1],dp[i-1]);
            else
            dp[i]=dp[i-1];

        }
        return dp[N-1];
        
    }