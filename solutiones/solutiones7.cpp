class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool a=0;
        for(int i=nums.size()-1;i>0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(!a&&nums[j]<nums[i])
                {
                swap(nums[i],nums[j]);
                sort(nums.begin()+j+1, nums.end());
                a=1;
                break;
                }
            }
        }
                 if(!a)
                 {
                 sort(nums.begin(), nums.end());
            }
    }
};