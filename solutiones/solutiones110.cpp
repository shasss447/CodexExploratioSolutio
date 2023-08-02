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
        if(n==1)
        return nums[0];
        vector<int>dp(n-1,-1);
        int x1= r(nums,dp,n-2);
        vector<int>nums2(nums.begin()+1,nums.end());
        vector<int>dp2(n-1,-1);
        int x2=r(nums2,dp2,n-2);
        return max(x1,x2);

    }
};