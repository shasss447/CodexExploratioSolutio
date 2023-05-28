long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        long long int s1=0,s2=0;
        for(int i=0;i<n;i++)
         {
            if(i%2==0)
             s1=s1*10+arr[i];
             
            else
             s2=s2*10+arr[i];
             
             
         }
         return s1+s2;