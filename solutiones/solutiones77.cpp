bool isPowerofTwo(long long n){
        
        // Your code here
        int count=0;
        while(n>0)
        {
            if(n&1)
            count++;
            n>>=1;
        }
        if(count==1)
        return 1;
        return 0;
        
    }