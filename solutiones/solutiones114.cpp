void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	      for(int i =0;i<n;i++)
	      {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-1) 
                matrix[i][j]=(int)1e9;
            }
	      }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            for(int k=0;k<n;k++)
	            {
	               if(j==i||k==i||j==k)
	               continue;
	               matrix[j][k]=min(matrix[j][k],matrix[j][i]+matrix[i][k]);
	               
	            }
	        }
	    }
	     for(int i =0;i<n;i++)
	     {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==(int)1e9) 
                matrix[i][j]=-1;
            }
        }
	}