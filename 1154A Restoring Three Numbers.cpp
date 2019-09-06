#include <bits/stdc++.h>
using namespace std;
int s[4];
int main()
{
    while(cin>>s[0]>>s[1]>>s[2]>>s[3])
    {
        sort(s,s+4);
        printf("%d %d %d\n", s[3] - s[0], s[3] - s[1], s[3]-s[2]);
    }
    return 0;
}
