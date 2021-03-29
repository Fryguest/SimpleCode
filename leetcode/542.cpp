class Solution {
public:
    int gox[4]={0,0,1,-1};
    int goy[4]={1,-1,0,0};
    struct point
    {
        int x,y;
        point(int _x,int _y)
        {
            x=_x;y=_y;
        }
    };
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        auto& v= matrix;
        int n=v.size(), m=v[0].size();
        vector<vector<int>> result(n, vector<int>(m,-1));
        queue<point>q;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (v[i][j]==0)
                {
                    result[i][j]=0;
                    q.push(point(i,j));
                }
            }
        }

        while (!q.empty())
        {
            point p=q.front();q.pop();
            int& x=p.x;
            int& y=p.y;
            for (int d=0;d<4;d++)
            {
                if (x+gox[d]>=0&&x+gox[d]<n&&y+goy[d]>=0&&y+goy[d]<m)
                {
                    if (result[x+gox[d]][y+goy[d]]!=-1) continue;
                    q.push(point(x+gox[d],y+goy[d]));
                    result[x+gox[d]][y+goy[d]]=result[x][y]+1;
                }
            }
        }
        return result;
    }
};
;
