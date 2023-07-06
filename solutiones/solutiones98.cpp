vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int>v;
		int i=0;
		while(i<N)
		{
		    for(int j=0;j<=i;j++)
		    {
		        int k=i-j;
		        v.push_back(A[j][k]);
		    }
		    i++;
		}
		while(i<2*N-1)
		{
		    for(int j=N-1;j>=i-N+1;j--)
		    {
		        int k=i-j;
		        v.push_back(A[k][j]);
		    }
		    i++;
		}
		
		return v;
	}