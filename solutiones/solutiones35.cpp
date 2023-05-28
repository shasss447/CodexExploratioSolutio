vector<int> minPartition(int N)
    {
        // code here
        int A[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int>v;
        for(int i=9;i>=0;i--)
        {
            while(A[i]<=N)
            {
                v.push_back(A[i]);
                N=N-A[i];
            }
        }
        return v;