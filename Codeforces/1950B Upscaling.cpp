#include <bits/stdc++.h>
using namespace std;
char a[50][50];
int main()
{
    bool f1=true;
    for (int i=1;i<=40;i+=2)
    {
        bool f2=f1;
        for (int j=1;j<=40;j+=2)
        {
            if (f2) a[i][j]=a[i][j+1]=a[i+1][j]=a[i+1][j+1]='#';
            else a[i][j]=a[i][j+1]=a[i+1][j]=a[i+1][j+1]='.';
            f2=!f2;
        }
        f1=!f1;
    }
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n*=2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++) printf("%c",a[i][j]); printf("\n");
        }
    }
    return 0;
}
