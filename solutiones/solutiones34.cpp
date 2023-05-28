 vector<pair<int,int>>v;
        int max=1;
        for(int i=0;i<n;i++)
        v.push_back({end[i],start[i]});
        sort(v.begin(),v.end());
        int endtime=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(v[i].second>endtime)
            {
                max++;
                endtime=v[i].first;
            }
        }
        return max;