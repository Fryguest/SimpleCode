#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
map<int,bool>m;
int a[N];
int s[N];

int main()
{
	long long ans=0;
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	s[0]=0;
	for (int i=1;i<=n;i++) {
		if (m[a[i]]) {
			s[i]=s[i-1];
		} else {
			s[i]=s[i-1]+1;
		}
		m[a[i]]=true;
	}
	m.clear();
	for (int i=n;i>=1;i--) {
		if (m[a[i]]) continue;
		ans+=s[i-1];
		m[a[i]]=true;
	}
	cout<<ans<<endl;
	return 0;
}
