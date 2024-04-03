
#include<bits/stdc++.h>

using namespace std;

int  sum(int a , int b) {
	int sum =  a+b;
	return sum;
}


int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int a;
cin>>a;
cout<<sum(a,a);
 return 0;
}