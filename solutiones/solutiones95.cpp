 public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isValid(int nr, int nc, int &N)
    {
        return (nr >= 0 && nr < N && nc >= 0 && nc < N);
    }

    int minStepToReachTarget(vector<int>& KnightPos, vector<int>& TargetPos, int N)
    {
        int nposx = KnightPos[0] - 1;
        int nposy = KnightPos[1] - 1;
        int tposx = TargetPos[0] - 1;
        int tposy = TargetPos[1] - 1;
        int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
        int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
        priority_queue<pair<int, pair<int, int>>> q;
        vector<vector<bool>> visit(N, vector<bool>(N, false));
        vector<vector<int>> steps(N, vector<int>(N, INT_MAX));
        q.push({0, {nposx, nposy}});
        visit[nposx][nposy] = true;
        steps[nposx][nposy] = 0;
        
        while (!q.empty())
        {
            int cr = q.top().second.first;
            int cc = q.top().second.second;
            q.pop();
            if (cr == tposx && cc == tposy)
                return steps[cr][cc];
            for (int i = 0; i < 8; i++)
            {
                int nr = cr + dr[i];
                int nc = cc + dc[i];
                
                if (isValid(nr, nc, N) && !visit[nr][nc] && steps[nr][nc] > steps[cr][cc] + 1)
                {
                    visit[nr][nc] = true;
                    steps[nr][nc] = steps[cr][cc] + 1;
                    q.push({-steps[nr][nc], {nr, nc}});
                }
            }
        }
        return -1;
    }