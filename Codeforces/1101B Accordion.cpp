#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
char s[N];
int len;
int main()
{
    while (~scanf("%s",s))
    {
        len=strlen(s);
        int l=-1,r=-1,a=-1,b=-1;
        for (int i=0;i<len;i++) if (s[i]=='[') {l=i;break;}
        for (int i=len-1;i>=0;i--) if (s[i]==']') {r=i;break;}
        if (l==-1||r==-1||l>r) {printf("-1\n"); continue;}
        for (int i=l+1;i<r;i++) if (s[i]==':') {a=i;break;}
        for (int i=r-1;i>l;i--) if (s[i]==':') {b=i;break;}
        if (a==-1||b==-1||a>=b) {printf("-1\n"); continue;}
        int num=0;
        for (int i=a+1;i<b;i++) if (s[i]=='|') num++;
        printf("%d\n", 4+num);
    }
    return 0;
}
