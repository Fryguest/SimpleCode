#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
struct point
{
    int x,y;
    int index;
}p[N];
vector<point>group[2][2];
int n;
int cal()
{
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            group[i][j].clear();
    for (int i=1;i<=n;i++)
    {
        group[abs(p[i].x)%2][abs(p[i].y)%2].push_back(p[i]);
    }
    int temp=0;
    for (int i=0;i<2;i++)
        for (int j=0;j<2;j++)
            if (group[i][j].size())
                temp++;
    return temp;
}
int main()
{
    int num;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        scanf("%d%d",&p[i].x, &p[i].y);
        p[i].index=i;
    }
    for (;;)
    {
        num=cal();
        if (num>=2) break;
        for(int i=1;i<=n;i++)
        {
            if (p[i].x%2) p[i].x=(p[i].x+1)/2;
            else p[i].x/=2;
            if (p[i].y%2) p[i].y=(p[i].y+1)/2;
            else p[i].y/=2;
        }
    }
    if (num>=3)
    {
        printf("%d\n", (int)(group[0][0].size() + group[1][1].size()));
        bool f=false;
        for (int i=0;i<group[0][0].size();i++)
        {
            if (f) printf(" ");
            printf("%d", group[0][0][i].index);
            f=true;
        }
        for (int i=0;i<group[1][1].size();i++)
        {
            if (f) printf(" ");
            printf("%d", group[1][1][i].index);
            f=true;
        }
        printf("\n");
    }
    else
    {
        for (int i=0;i<2;i++)
        {
            for (int j=0;j<2;j++)
            {
//                cout<<i<< " " << j<< " " << group[i][j].size()<<endl;
                if (group[i][j].size()!=0)
                {
                    printf("%d\n",(int)group[i][j].size());
                    bool f=false;
                    for (int k=0;k<group[i][j].size();k++)
                    {
                        if(f) printf(" ");
                        printf("%d", group[i][j][k].index);
                        f=true;
                    }
                    printf("\n");
                    return 0;
                }
            }
        }
    }

    return 0;
}
