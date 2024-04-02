#include<bits/stdc++.h>
using namespace std;
int a[4],b[4];
int findmax(int s[])
{
    int maxn=-1005;
    for (int i=0;i<4;i++)
        maxn=max(maxn,s[i]);
    return maxn;
}
int findmin(int s[])
{
    int minn=1005;
    for (int i=0;i<4;i++)
        minn=min(minn,s[i]);
    return minn;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for (int i=0;i<4;i++) cin>>a[i]>>b[i];
        cout<<(findmax(a)-findmin(a))*(findmax(b)-findmin(b))<<endl;
    }
    return 0;
}
