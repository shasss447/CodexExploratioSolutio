//User function Template for C++


class Solution{
  public:
 
  int findMaxSum(vector<int>& a){
      //Code Here
      int n=a.size();
       if (n == 0)
            return 0;
        vector<int> dp(n, 0);
        dp[0] = a[0];
        dp[1] = a[0] + a[1];
        dp[2] = max(dp[1], a[2]+ max(a[0] , a[1]));
        for (int i = 3; i < n; ++i) {
            dp[i] = max(dp[i - 1], a[i]+ max(dp[i - 2], dp[i - 3]+a[i-1]));
        }
        
        return dp[n - 1];
  }
};//User function Template for C++
