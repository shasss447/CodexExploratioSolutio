class Solution {
public:
    bool f(vector<int>& nums,int&n,int i)
    {
        if(i>=n-1)
        return 1;
        for(int j=nums[i];j>0;j--)
        {
            if(f(nums,n,i+j))
            return 1;
        }
        return 0;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==0||n==1)
        return 1;
        int t=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=t)
            t=i;
        }
        if(t==0)
        return 1;
        else
        return 0;
    }
};