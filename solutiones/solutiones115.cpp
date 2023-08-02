class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(n==0||s[0]=='0')
        return 0;       
        vector<int>v(n+1,0);
        v[0]=1,v[1]=1;
        for(int i=2;i<=n;i++)
        {
            int od=stoi(s.substr(i-1,1));
            int td=stoi(s.substr(i-2,2));
            if(od>=1&&od<=9)
            v[i]+=v[i-1];
            if(td>=10&&td<=26)
            v[i]+=v[i-2];
        }
        return v[n];
    }
};