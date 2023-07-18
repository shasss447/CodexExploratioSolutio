void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int curr=i;
      int l=i*2+1;
      int r=i*2+2;
      if(l<n&&arr[l]>arr[curr])
      curr=l;
      if(r<n&&arr[r]>arr[curr])
      curr=r;
      if(curr!=i)
      {
          swap(arr[i],arr[curr]);
          heapify(arr,n,curr);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    for(int i=(n/2)-1;i>=0;i--)
    heapify(arr,n,i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        int x=n;
        while(x>0)
        {
            swap(arr[0],arr[x-1]);
            x--;
            heapify(arr,x,0);
        }
    }