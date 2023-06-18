 vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        sort(nums.begin(), nums.end());
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(!(nums[i]^nums[i+1]))
            i=i+1;
            else
            v.push_back(nums[i]);
            
        }
        return v;
    }