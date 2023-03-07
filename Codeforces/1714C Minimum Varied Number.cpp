#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v.clear();
        for(int i=9;i>=1;i--)
        {
            if (n>=i)
            {
                v.push_back(i);
                n-=i;
            }
        }
        for(int i=v.size()-1;i>=0;i--)cout<<v[i];cout<<endl;
    }
    return 0;
}
