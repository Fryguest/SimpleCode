#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, a[7];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<7;i++) cin>>a[i];
        sort(a,a+7);
        cout<<a[0]<<" "<<a[1]<<" "<<a[6]-a[0]-a[1]<<endl;
    }
    return 0;
}
