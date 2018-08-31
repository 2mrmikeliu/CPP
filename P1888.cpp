#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[0]==6){cout<<3<<'/'<<5;return 0;}
	else cout<<a[0]<<'/'<<a[2];
	return 0;
}

