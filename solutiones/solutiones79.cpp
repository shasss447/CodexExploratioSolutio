 int countBitsFlip(int a, int b){
        
        // Your logic here
        int count=0;
        int x=a^b;
        while(x>0)
        {
            if(x&1)
            count++;
            x>>=1;
        }
        return count;
        
    }