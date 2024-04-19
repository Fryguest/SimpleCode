#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N];
vector<int>v1,v2;
int main()
{
    int t,n;
    int l1,l2;
    bool f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        v1.clear();
        v2.clear();
        for(int i=0;i<n;i++)
        {
            if (a[i]&1) v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        l1=l2=0;
        f=true;
        for(int i=0;i<n;i++)
        {
            if (a[i]&1) a[i]=v1[l1++];
            else a[i]=v2[l2++];
            if (i&&a[i]<a[i-1]) f=false;
        }
        if (f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
