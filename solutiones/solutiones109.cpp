class Solution {
public:
    int r(vector<int>& nums,vector<int>&dp,int n)
    {
        if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=max(nums[n]+r(nums,dp,n-2),r(nums,dp,n-1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return r(nums,dp,n-1);
    }
};