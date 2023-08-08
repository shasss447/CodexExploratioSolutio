int findCatalan(int n) 
    {
        //code here
        int m=1e9+7;
       vector<int>v(n+1,0);
       v[0]=1;
       v[1]=1;
       for(int i=2;i<n+1;i++)
       {
           for(int j=0;j<i;j++)
           v[i]=(v[i]+(1LL *v[j]*v[i-j-1])%m)%m;
       }
       
        return v[n]%m;
    }