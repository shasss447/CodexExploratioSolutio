int findPosition(int N) {
        // code here
        int count=0;
        int pos,currpos=0;
        while(N>0)
        {
            currpos++;
            if(N&1)
            {
               pos=currpos;
               count++;
            }
            N>>=1;
        }
        if(count==1)
        return pos;
        return -1;
    }