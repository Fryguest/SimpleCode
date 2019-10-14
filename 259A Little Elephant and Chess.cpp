#include <bits/stdc++.h>
using namespace std;
char a[10][10];
int main()
{
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=8;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    bool flag=true;
    for (int i=1;i<=8;i++)
    {
        if (a[i][1]==a[i][8]) flag=false;
        for (int j=1;j<=7;j++) if (a[i][j]==a[i][j+1]) flag=false;
    }
    if (flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

