#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	bool b;
	int school[8],afterschool[8];
	for(int i=1;i<=7;i++)cin>>school[i]>>afterschool[i];
	for(int i=1;i<=7;i++)
	if(school[i]+afterschool[i]>8)
	{
		cout<<i;
		return 0;
	}else b=0;
	if(b=0)cout<<0;
	return 0;
}

