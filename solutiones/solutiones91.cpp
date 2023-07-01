 static bool compare(const Job& job1, const Job& job2) {
    return job1.profit > job2.profit;
}
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
         sort(arr, arr + n, compare);
    int maxd = 0;
    for (int i = 0; i < n; i++)
        maxd = max(maxd, arr[i].dead);
    vector<int> d(maxd, -1);
    int maxp = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = arr[i].dead - 1; j >= 0; j--) {
            if (d[j] == -1) {
                d[j] = arr[i].id;
                count++;
                maxp += arr[i].profit;
                break;
            }
        }
    }
    return {count, maxp};
        // your code here
    } 