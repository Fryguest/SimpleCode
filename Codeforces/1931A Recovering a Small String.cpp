#include <bits/stdc++.h>
using namespace std;
string ans[100];
void pre()
{
    for(int i=3;i<=78;i++) ans[i]="";
    for (char a='a';a<='z';a++)
    {
        for(char b='a';b<='z';b++)
        {
            for(char c='a';c<='z';c++)
            {
                string s=string(1, a)+b+c;
                int num=int(a)+b+c-'a'-'a'-'a'+3;
                if (ans[num]=="" or ans[num]>s) ans[num]=s;
            }
        }
    }

}
int main()
{
    pre();
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
