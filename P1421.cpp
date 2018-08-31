#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	double d=a;
	d+=b*0.1;
	d=d/1.9;
	d=floor(d);
	printf("%.0f",d);
	return 0;
}

