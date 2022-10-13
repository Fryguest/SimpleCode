#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> res;
    long long x;
    for (int i=2;i<27;i++)
    {
        cout<<"? 1 "<<i<<endl;
        cin>>x;
        if (x==-1){
            cout<<"! "<<i-1<<endl;
            return 0;
        }
        res.push_back(x);
        cout<<"? "<<i<<" 1"<<endl;
        cin>>x;
        res.push_back(x);
    }
    for (int i=0;i<50;i+=2)
    {
        if (res[i]!=res[i+1])
        {
            cout<<"! "<<res[i]+res[i+1]<<endl;
            return 0;
        }
    }
    cout<<"! "<<res[0]+res[0]<<endl;
    return 0;
}