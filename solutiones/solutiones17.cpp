 vector<int>v;
            map<int,int>mp;
            mp[A[0]]++;
            mp[B[0]]++;
            mp[C[0]]++;
            for(int i=1;i<n1;i++)
            {
                if(A[i]!=A[i-1])
                mp[A[i]]++;
            }
            for(int i=1;i<n2;i++)
            {
                if(B[i]!=B[i-1])
                mp[B[i]]++;
            }
            for(int i=1;i<n3;i++)
            {
                if(C[i]!=C[i-1])
                mp[C[i]]++;
            }
            for(auto x:mp)
            {
                if(x.second==3)
                v.push_back(x.first);
            }
            return v;
        }