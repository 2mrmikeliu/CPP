
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=c-a;
	if(d-b<0)
	{
		e--;
		f=60-b+d;
	}else f=d-b;
	cout<<e<<" "<<f;
	return 0;
}

