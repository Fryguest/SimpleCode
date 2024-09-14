#include <bits/stdc++.h>
using namespace std;
const int N=105;
int a[N];
int main()
{
    int t;
    int n,a,b;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>s1>>s2;
        a=b=0;
        for (int i=0;i<n;i++)
        {
            if(s1[i]==s2[i]) continue;
            if(s1[i]=='1') a++;
            else b++;
        }
        cout<<max(a,b)<<endl;
    }
    return 0;
}
