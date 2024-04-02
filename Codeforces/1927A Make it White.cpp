#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int l,r;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n>>s;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='B') {l=i;break;}
        }
        for (int i=n-1;i>=0;i--)
        {
            if (s[i]=='B') {r=i;break;}
        }
        cout<<r-l+1<<endl;
    }
    return 0;
}

