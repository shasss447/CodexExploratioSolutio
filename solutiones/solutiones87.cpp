class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char>st;
        int maxlen=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(st.count(s[i])==0)
            {
                st.insert(s[i]);
                maxlen=max(maxlen,i-l+1);
            }
            else
            {
                while(st.count(s[i]))
                {
                    st.erase(s[l]);
                    l++;
                }
                st.insert(s[i]);
            }
        }
        return maxlen;
    }
};