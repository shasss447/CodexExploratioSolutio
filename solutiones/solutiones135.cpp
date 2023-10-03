/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
      static bool compare(val a, val b) 
    {
        return a.second < b.second;
    }
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        //Your code here
        if(n==0||n==1)
        return n;
        sort(p,p+n,compare) ;
         int box = p[0].second ;
        int count = 1 ;
        for(int i =1 ; i<n ; i++)
        {
            if(box<p[i].first)
            {
                box = p[i].second ;
                count++ ;
            }
        }
        return count ;
        
    }
};