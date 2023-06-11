 #define mod 1000000007
    long long int countBT(int h) { 
        // code here
       long long int  height[h+1];
        height[0] = 1;
        height[1] = 1;
        for(int  i = 2; i <= h;i++)
            height[i] = ((height[i-1]*height[i-1])%mod + (2*height[i-1]*height[i-2])%mod)%mod;
        return height[h];
    }