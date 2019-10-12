#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
char s[N];
int len;
int main()
{
    scanf("%s",s);
    len=strlen(s);
    char c=s[0];
    for (int i=0;i<len;i++)
    {
        if (s[i]>c) printf("Ann\n");
        else
        {
            printf("Mike\n");
            c=s[i];
        }
    }
    return 0;
}
