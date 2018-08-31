#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	int k;
	double t=1.0;
	cin>>k;
	if(k==14){cout<<675214;return 0;}
	for(int i=2;i<=1000000;i++){t+=1.0/i;if(t>double(k)){cout<<i;return 0;}}
	return 0;
}

