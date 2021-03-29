#include <bits/stdc++.h>
using namespace std;
const int N=105;
set<int>s[N];
int f[N];
int find(int x)
{
    if (x==f[x]) return x;
    return f[x]=find(f[x]);
}
void merge(int a,int b)
{
    int x=find(a);
    int y=find(b);
    if (x!=y) f[x]=y;
    return ;
}

int main()
{
    int n,m,num,x,ans;
    bool flag;
    while (cin>>n>>m)
    {
        for (int i=1;i<=n;i++)f[i]=i;
        for (int i=1;i<=n;i++)s[i].clear();
        flag=false;
        for (int i=1;i<=n;i++)
        {
            cin>>num;
            if (num) flag=true;
            while(num--)
            {
                cin>>x;
                s[i].insert(x);
                for (int j=1;j<i;j++)
                {
                    if (s[j].find(x)!=s[j].end())
                    {
                        merge(i,j);
                    }
                }
            }
        }
        if (!flag) cout<<n<<endl;
        else
        {
            ans=0;
            for (int i=1;i<=n;i++)
            {
                if (find(i)==i) ans++;
            }
            cout<<ans-1<<endl;
        }
    }
    return 0;
}

