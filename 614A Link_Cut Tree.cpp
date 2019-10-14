#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r,k;
    long long num;
    bool flag;
    vector<long long>result;
    while (cin>>l>>r>>k)
    {
        flag=false;
        num=1;
        result.clear();
        while (num<=r)
        {
            if (num>=l) result.push_back(num);
            if (num<=r/k) num*=k;
            else break;
        }
        if (result.size()==0) cout<<-1<<endl;
        else 
        {
            for (int i=0;i<result.size();i++) cout<<result[i]<<(i==result.size()-1?'\n':' ');
        }
    }
    return 0;
}
