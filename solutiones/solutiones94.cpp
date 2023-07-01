int minDiff(int arr[], int N, int K)
    {
       sort(arr,arr+N);
       int mindiff=INT_MAX;
       for(int i=0;i+K-1<N;i++)
           mindiff=min(arr[i+K-1]-arr[i],mindiff);
        return mindiff;
    }