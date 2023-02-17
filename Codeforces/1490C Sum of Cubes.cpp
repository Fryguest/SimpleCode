#include<bits/stdc++.h>
using namespace std;
set<long long>s;
void pre()
{
    s.clear();
    for (int i=1;i<=10000;i++) s.insert(1LL*i*i*i);
}
bool solve(long long n)
{
    for(int i=1;i<=10000;i++)
    {
        if(s.find(n-1LL*i*i*i)!=s.end()) return true;
    }
    return false;
}
int main()
{
    pre();
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (solve(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
