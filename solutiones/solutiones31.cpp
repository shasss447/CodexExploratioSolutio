queue<int> rev(queue<int> q)
{
    stack<int>st;
    while(!q.empty())
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
    return qu;