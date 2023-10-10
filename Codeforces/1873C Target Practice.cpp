#include<bits/stdc++.h>
using namespace std;
const int N=20;
int a[N];
int main()
{
    int t,ans;
    char c;
    scanf("%d", &t);
    while(t--)
    {
        ans=0;
        for(int i=1;i<=10;i++)
        {
            for(int j=1;j<=10;j++)
            {
                scanf(" %c", &c);
                if (c=='X')
                {
                    ans+=6-max(max(6-j, j-5),max(6-i,i-5));
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
