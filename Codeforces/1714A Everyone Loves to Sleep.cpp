#include<bits/stdc++.h>
using namespace std;
int h[15],m[15];
struct Clock
{
    int h;
    int m;
    bool operator<(Clock c)
    {
        if (this->h!=c.h) return this->h<c.h;
        return this->m<c.m;
    }
    bool operator<=(Clock c)
    {
        if (this->h!=c.h) return this->h<c.h;
        return this->m<=c.m;
    }
    Clock operator-(Clock c)
    {
        Clock ans;
        ans.h=this->h-c.h;
        ans.m=this->m-c.m;
        if (ans.m<0)
        {
            ans.m+=60;
            ans.h--;
        }
        return ans;
    }
}c[15];
int main()
{
    int t,n;
    Clock a;
    Clock ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>a.h>>a.m;
        for(int i=1;i<=n;i++)cin>>c[i].h>>c[i].m;
        sort(c+1,c+n+1);
        n++;
        c[n].h=c[1].h+24; c[n].m=c[1].m;
        for(int i=1;i<=n;i++)
        {
            if (a<=c[i])
            {
                ans=c[i]-a;
                break;
            }
        }
        cout<<ans.h<<" "<<ans.m<<endl;
    }
    return 0;
}
