 int count0=0,count1=0,diff=0,maxdiff=-1;
	    for(int i=0;i<S.size();i++)
	    {
	        if(S[i]=='0')
	        count0++;
	        else
	        count1++;
	        diff=count0-count1;
        if(diff>maxdiff)
	        maxdiff=diff;
	        if(diff<0)
	        {
	            count0=0;
	            count1=0;
	            diff=0;
	        }
	    }