#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;
        a=b=0;
        for(int i=0;i<5;i++)
        {
            if (s[i]=='A') a++;
            else b++;
        }
        if (a>b) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}
