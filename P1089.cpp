#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int bank=0;
	int plan[13]={0},money=300,temp;
	for(int i=1;i<=12;i++)cin>>plan[i];
	for(int i=1;i<=12;i++)
	{
		money=money-plan[i];
		if(money>=100)
		{
		bank+=money/100*100;
		money-=money/100*100;
		}else
		if(money<0)
		{
			cout<<"-"<<i;
			return 0;
		}
		money+=300;
	}
	money+=bank*1.2;
	money-=300;
	cout<<money;
	return 0;
}

