bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int A[size];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<n)
        A[i]=arr[i]+n;
        else
        A[i]=arr[i]-n;
    }
    for(int i=0;i<size;i++)
    {
        if(find(arr,arr+size,A[i]))
        return 1;
    }
    return 0;
}