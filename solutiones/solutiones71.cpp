int permutationCoeff(int n, int k)
    {
        //Code here
        long long  mod = 1e9+7;
        int b=1;
        for(int i=0;i<=k-1;i++)
        b=b%mod*(n-i)%mod;
        return b;

    }