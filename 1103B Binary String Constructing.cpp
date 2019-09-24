#include <bits/stdc++.h>
using namespace std;
const int N=1e3+5;
char s[N];
int main()
{
    int a,b,x;
    while (cin>>a>>b>>x)
    {
        char c1,c2;
        if (a>b) c1='0', c2='1';
        else c1='1', c2='0', swap(a,b);
        if (x%2)
        {
            x/=2;
            for (int i=1;i<=a-x;i++) s[i]=c1;
            for (int i=a-x+1;i<=a+x;i+=2) { s[i]=c2; s[i+1]=c1; }
            for (int i=a+x+1;i<=a+b;i++) s[i]=c2;
        }
        else
        {
            x=(x-1)/2;
            for (int i=1;i<a-x;i++) s[i]=c1;
            for (int i=a-x;i<a+x;i+=2) { s[i]=c2; s[i+1]=c1; }
            for (int i=a+x;i<a+b;i++) s[i]=c2;
            s[a+b]=c1;
        }
        for (int i=1;i<=a+b;i++) cout<<s[i];cout<<endl;

    }
    return 0;
}
