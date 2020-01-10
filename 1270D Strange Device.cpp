//#include <bits/stdc++.h>
//using namespace std;
//const int N=505;
//int a[N];
//int main()
//{
//    int n,k;
//    int x,y,num;
//    vector<int>v;
//    v.clear();
//    scanf("%d%d",&n,&k);
//    memset(a,-1,sizeof(a));
//    for (int i=1;i<=k;i++)
//    {
//        printf("?");
//        num=0;
//        for (int j=1;j<=n;j++)
//        {
//            if (a[j]==-1)
//            {
//                num++;
//                printf(" %d",j);
//                if (num==k) break;
//            }
//        }
//        printf("\n");
//        fflush(stdout);
//        scanf("%d%d", &x,&y);
//        a[x]=y;
//    }
//    printf("?");
//    for (int i=1;i<=n;i++)
//    {
//        if (a[i]!=-1)
//        {
//            printf(" %d",i);
//            v.push_back(a[i]);
//        }
//        printf("\n");
//        fflush(stdout);
//        scanf("%d%d", &x,&y);
//    }
//    sort(v.begin(),v.end());
//    for (int i=0;i<v.size();i++)
//    {
//        if (y==v[i]) printf("! %d\n", i+1);
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
const int N=505;
int a[N];
int main()
{
    map<int, int>m;
    int n,k;
    int x,y;
    scanf("%d%d",&n,&k);
    for (int i=1;i<=k+1;i++)
    {
        printf("?");
        for (int j=1;j<=k+1;j++)
        {
            if (j==i) continue;
            printf(" %d", j);
        }
        printf("\n");
        fflush(stdout);
        scanf("%d%d",&x,&y);
        m[y]++;
    }
    map<int, int>::iterator it = m.begin();
    printf("! %d\n", k + 1 - it->second);
    return 0;
}
