#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int today=0;
	int lastday=-1;
	int s=0,max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>today;
	if(today>lastday)s++;
	else if(s>max)
	{max=s;s=1;}else s=1;
	lastday=today;
	}
	cout<<max;
	return 0;
}

