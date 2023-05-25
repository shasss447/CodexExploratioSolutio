int ev(int a,int b,char c)
    {
       if(c=='+')
       return a+b;
       else if(c=='-')
       return a-b;
       else if(c=='*')
       return a*b;
       else if(c=='/')
       return a/b;
    }
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='+'||S[i]=='-'||S[i]=='*'||S[i]=='/')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(ev(b,a,S[i]));
            }
            else
            st.push(int(S[i])-48);
        }
        return st.top();    }