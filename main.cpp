
#include<bits/stdc++.h>

using namespace std;


int main()
{
 
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif

int k;
while(scanf("%d",&k)!= EOF) {
	int ans = 0, v;
	while(k--) {
		scanf("%d" , &v);
		ans += v;
	}
	printf("%d\n",ans);
}
return 0;
}