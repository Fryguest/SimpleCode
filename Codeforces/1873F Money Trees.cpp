#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],b[N],l1[N],l2[N];
int n,x;
int cal(int h)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=max(0,h-a[i]);
        if (ans>x) return ans;
    }
    return ans;
}
int main()
{
    int t;
    int n,k,ans,l,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        for(int i=1;i<=n;i++) scanf("%d",&b[i]);
        l1[1]=1;
        if (a[1]>k) l2[1]=2;
        else l2[1]=1;
        l=1;
        sum=a[1];
        for(int i=2;i<=n;i++)
        {
            if (b[i-1]%b[i]==0) l1[i]=l1[i-1];
            else l1[i]=i;

            sum+=a[i];
            while(sum>k) sum-=a[l++];
            l2[i]=l;
        }
        ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=max(ans,i-max(l1[i],l2[i])+1);
        }
        printf("%d\n",ans);
    }
    return 0;
}
