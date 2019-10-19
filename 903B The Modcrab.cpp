#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1,a1,c1;
    int h2,a2;
    while (cin>>h1>>a1>>c1>>h2>>a2)
    {
        int time = (h2+a1-1)/a1;
        int hp = (time-1)*a2;
        int x = (hp-h1+1+c1-a2-1)/(c1-a2);
        if (x<0) x=0;
        cout<<time+x<<endl;
        while (x--) cout<<"HEAL"<<endl;
        while (time--) cout<<"STRIKE"<<endl;
    }
    return 0;
}
