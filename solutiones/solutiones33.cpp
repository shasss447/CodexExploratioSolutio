stack<int>st;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    queue<int>qu;
    while(!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        qu.push(q.front());
        q.pop();
    }
    return qu;