int longestSubsequence(int N, int A[])
    {
        // code here
       vector<int>dp(N,1);
       for(int i=1;i<N;i++)
       {
           for(int j=0;j<i;j++)
           {
               if(abs(A[i]-A[j])==1)
               dp[i]=max(dp[i],dp[j]+1);
           }
       }
     int maxLength = 0;
    for (int i = 0; i < N; i++) {
        maxLength = max(maxLength, dp[i]);
    }
    
    return maxLength;
    }