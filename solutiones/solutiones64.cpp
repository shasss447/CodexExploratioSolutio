class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<bool>> visit(m, vector<bool>(n));
        queue<pair<int,int>>q;
        int c=image[sr][sc];
        image[sr][sc]=color;
        q.push({sr,sc});
        visit[sr][sc]=1;
        while(!q.empty())
        {
            pair<int,int>x=q.front();
            int f=x.first;
            int s=x.second;
            q.pop();
            if(f+1<m&&!visit[f+1][s]&&c==image[f+1][s])
            {
                visit[f+1][s]=1;
                image[f+1][s]=color;
                q.push({f+1,s});
            }
            if(f>0&&!visit[f-1][s]&&c==image[f-1][s])
            {
                visit[f-1][s]=1;
                image[f-1][s]=color;
                q.push({f-1,s});
            }
            if(s+1<n&&!visit[f][s+1]&&c==image[f][s+1])
            {
                visit[f][s+1]=1;
                image[f][s+1]=color;
                q.push({f,s+1});
            }
            if(s>0&&!visit[f][s-1]&&c==image[f][s-1])
            {
                visit[f][s-1]=1;
                image[f][s-1]=color;
                q.push({f,s-1});
            }

        }
        return image;
        
    }
};