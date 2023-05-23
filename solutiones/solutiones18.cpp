for(int i = 0;i<n;){
        if(arr[i]==x) return i;
        i+=max(1,abs(arr[i]-x)/k);
    }