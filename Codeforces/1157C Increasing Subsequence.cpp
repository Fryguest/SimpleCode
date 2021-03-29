#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
char s[N];
int cal(int num, int x, int d)
{
    int result=0;
    while (x>=1&&x<=n&&a[x]>num)
    {
        num=a[x];x+=d;result++;
    }
    return result;
}
int main()
{
    while (cin>>n)
    {
        int ans=0,l=1,r=n,num=-1;
        for (int i=1;i<=n;i++) cin>>a[i];
        while (l<=r)
        {
            if (a[l]<a[r])
            {
                if(a[l]>num)
                {
                    num=a[l++];
                    s[ans++]='L';
                }
                else if(a[r]>num)
                {
                    num=a[r--];
                    s[ans++]='R';
                }
                else break;
            }
            else if (a[l]>a[r])
            {
                if (a[r]>num)
                {
                    num=a[r--];
                    s[ans++]='R';
                }
                else if(a[l]>num)
                {
                    num=a[l++];
                    s[ans++]='L';
                }
                else break;
            }
            else
            {
                int L=cal(num,l,1);
                int R=cal(num,r,-1);
                if (L>R) while (L--) s[ans++]='L';
                else while(R--) s[ans++]='R';
                break;
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<ans;i++) cout<<s[i];cout<<endl;


    }
    return 0;
}
