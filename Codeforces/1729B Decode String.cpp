#include<bits/stdc++.h>
using namespace std;
const int N=55;
char s[N],ans[N];
int len;
int main()
{
    int t,n,x,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%s", s);
        len=strlen(s);
        d=0;
        for (int i=len-1;i>=0;)
        {
            if (s[i]=='0')
            {
                x=(s[i-2]-'0')*10+(s[i-1]-'0')-1;
                i-=3;
            }
            else
            {
                x=s[i]-'0'-1;
                i--;
            }
            ans[d++]=x+'a';
        }
        for (int i=d-1;i>=0;i--) printf("%c",ans[i]); printf("\n");
    }

    return 0;
}