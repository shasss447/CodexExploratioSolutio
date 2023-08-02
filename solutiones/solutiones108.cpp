class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1);
        dp[0]=1;
        int n=nums.size();
        for(int i=1;i<=target;i++)
        {
            long long int t=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]<=i)
                t+=dp[i-nums[j]];
            }
            dp[i]=t;
        }
        return dp[target];
    }
};