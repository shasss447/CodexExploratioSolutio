void cm(vector<vector<int>>&v,vector<int> &A,int n,int s,vector<int>a)
    {
        if(n==0)
        {
            v.push_back(a);
            return;
        }
        if(n<0)
        return;
        cm(v,A,n-1,s,a);
        a.push_back(A[n]);
        cm(v,A,n,s-A[n],a);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>v;
        vector<int>a;
        int n=A.size();
        cm(v,A,n-1,B,a);
        return v;
    }