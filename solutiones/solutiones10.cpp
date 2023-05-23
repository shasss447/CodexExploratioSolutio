class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
        return 0;
        stack<char>st;
        for(int i=0;i<s.length()/2;i++)
        if(s[i]=='{')
        st.push('}');
        else if(s[i]=='[')
        st.push(']');
        else if(s[i]=='(')
        st.push(')');
        for(int i=s.length()/2;i<s.length();i++)
        {
            if(s[i]!=st.top())
            return 0;
            st.pop();
        }
        return 1;
    }
};