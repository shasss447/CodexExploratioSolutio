 int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N>0)
        {
            if(N&1)
        count++;
        N>>=1;
            
        }
        return count ;
    }