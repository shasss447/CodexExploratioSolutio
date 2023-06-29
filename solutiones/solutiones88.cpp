bool isvalid(vector<vector<int>>& m, int n, int cx, int cy) {
        return (cx >= 0 && cy >= 0 && cx < n && cy < n && m[cx][cy] == 1);
    }

    void dfs(int sx, int sy, vector<vector<int>>& m, int n, vector<string>& v, string s, vector<vector<int>>& visit) {
        if (sx == n - 1 && sy == n - 1) {
            v.push_back(s);
            return;
        }
        visit[sx][sy] = 1;
        if (isvalid(m, n, sx - 1, sy) && !visit[sx - 1][sy])
            dfs(sx - 1, sy, m, n, v, s + 'U', visit);
        if (isvalid(m, n, sx + 1, sy) && !visit[sx + 1][sy])
            dfs(sx + 1, sy, m, n, v, s + 'D', visit);
        if (isvalid(m, n, sx, sy - 1) && !visit[sx][sy - 1])
            dfs(sx, sy - 1, m, n, v, s + 'L', visit);
        if (isvalid(m, n, sx, sy + 1) && !visit[sx][sy + 1])
            dfs(sx, sy + 1, m, n, v, s + 'R', visit);
        visit[sx][sy] = 0;
        return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
       vector<string> v;
        if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
            return v;
        vector<vector<int>> visit(n, vector<int>(n, 0));
        string st;
        dfs(0, 0, m, n, v, st, visit);
        return v;
        
    }