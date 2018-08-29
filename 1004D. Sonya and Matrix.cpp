#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int s[N];
int a[N];
bool check(int n, int m , int x,int y, int maxn) 
{
//	printf("n=%d, m=%d, x=%d, y=%d, maxn=%d\n",n,m,x,y,maxn);
	vector<int>c(maxn+1,0);
	if (n<=0 || m<=0 || x<=0 || y<=0) return false;
	if (abs(1-x)+ abs(1-y) > maxn) return false;
	if (abs(1-x)+ abs(m-y) > maxn) return false;
	if (abs(n-x)+ abs(1-y) > maxn) return false;
	if (abs(n-x)+ abs(m-y) > maxn) return false;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) {
			c[abs(i-x) + abs(j-y)] ++;
		}
	}
	for (int i=1;i<=maxn;i++) if (c[i]!=s[i]) return false;
	printf("%d %d\n%d %d\n", n,m,x,y);
	return true;
}
int main()
{
	memset(s, 0, sizeof(s));
	int n,m,x,y;
	int t;
	scanf("%d",&t);
	for (int i=1;i<=t;i++) {scanf("%d", &x); s[x]++;}
	if (s[0]!=1) {
		printf("-1\n"); 
		return 0;
	}
	x=1;
	while (1) {
		if (s[x]!=x*4) break;
		x++;
	}
	int tem=0;
	for (int i=0;i<t;i++) {
		if (s[i]) tem = i;
	}
	for (int i=1;i*i<=t;i++) {
		if (t%i ==0) {
			n=i; m=t/i;
			if (check(n,m,x, tem+x+1-n, tem)|| check(m, n, x, tem+x+1-m,tem)) {
				return 0;
			}
		}
	}
	printf("-1\n");
	return 0;
}
