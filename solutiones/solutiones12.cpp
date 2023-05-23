class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string x=strs[i];
            if(x=="")
            return x;
            for(int j=0;j<min(s.length(),strs[i].length());j++)
            {
                
                if(s[j]!=x[j])
                {
                    s=s.substr(0,j);
                    if(s.length()==0)
                    return s;
                    break;
                }
                if(s.length()>strs[i].length()&&j==strs[i].length()-1)
                s=strs[i];
            }
        }
        return s;
        
    }
};