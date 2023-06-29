vector<int> findTwoElement(vector<int> arr, int n) 
    {
        // code here
       // sort(arr.begin(),arr.end());
        vector<int>freq(n+1,0);
        int missingNum = 0;
        int duplicateNum = 0;
        for (int num :arr) 
        {
        freq[num]++;
        if (freq[num]== 2) 
         duplicateNum= num;
        }
        for (int i=1;i<=n;i++) 
        {
        if (freq[i] == 0) 
        {
            missingNum = i;
            break;
        }
        }
    return { duplicateNum,missingNum };
    }