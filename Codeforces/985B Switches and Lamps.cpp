#include <bits/stdc++.h>
using namespace std;
const int N=2e3+5;
char a[N][N];
int b[N][N];
int main()
{
    int n,m,num;
    string ans;
    bool flag;
    while (~scanf("%d%d",&n,&m))
    {
        for (int i=0;i<n;i++) scanf("%s",a[i]);
        memset(b,0,sizeof(b));
        for (int j=0;j<m;j++)
        {
            num=0;
            for (int i=0;i<n;i++) num+=a[i][j]-'0';
            if (num>1) for (int i=0;i<n;i++) if (a[i][j]=='1') b[i][j]=1;
        }
        ans="NO";
        for (int i=0;i<n;i++)
        {
            flag=false;
            for (int j=0;j<m;j++) if (a[i][j]=='1'&&!b[i][j]) flag=true;
            if (!flag) ans="YES";
        }
        cout<<ans<<endl;
    }
    return 0;
}
