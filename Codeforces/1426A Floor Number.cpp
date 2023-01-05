#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d",&n,&x);
		printf("%d\n", n>2?(n-3+x)/x+1:1);
	}
	return 0;
}
