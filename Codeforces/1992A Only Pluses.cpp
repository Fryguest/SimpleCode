#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(int i=1;i<=5;i++)
        {
            if (a<=b and a<=c) a++;
            else if (b<=a and b<=c) b++;
            else c++;
        }
        cout<<a*b*c<<endl;

    }
    return 0;
}
