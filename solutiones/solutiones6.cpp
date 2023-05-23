class Solution {
public:
    bool searchsort(vector<int>&nums,int target)
    {
        int i=0,end=nums.length();
        while(i<end)
        {
            int mid=(i+end)/2;
            if(target==nums[mid])
            return 1;
            else if(target<nums[mid])
            end=mid;
            else if(target>nums[mid])
            i=mid;
        }
        return 0;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.length();
        if(nums[0]<nums[n-1])
        {
            return searchsort(nums,target);
        }
        else
        {
            for(int i=0;i<=n/2;i++)
            {
                if(nums[i]>nums[i+1]||nums[n-i-1]<nums[n-i-2])
                
            }
        }
    }
};