#include <bits/stdc++.h>
using namespace std;
const int N = 3e5+5;
deque<int>a[3];
char s[N];
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s",s);
    for (int i=0;i<n;i++) a[s[i]-'0'].push_back(i);
    for (int i=0;i<3;i++)
    {
        if (a[i].size() < n/3)
        {
            for (int j=i+1;j<3;j++)
            {
                while (a[i].size() < n/3 && a[j].size() > n/3)
                {
                    a[i].push_back(a[j].front());
                    a[j].pop_front();
                }
            }
        }
        if (a[i].size() > n/3)
        {
            for (int j=2;j>i;j--)
            {
                while (a[i].size() > n/3 && a[j].size() < n/3)
                {
                    a[j].push_back(a[i].back());
                    a[i].pop_back();
                }
            }
        }
    }

    for (int i=0;i<3;i++)
    {
        while (!a[i].empty())
        {
            s[a[i].front()]=i+'0';
            a[i].pop_front();
        }
    }
    printf("%s\n", s);
    return 0;
}
