#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int a;
	double money;
	cin>>a;
	if(a<=150)
	{
		money=0.4463*a;
	}
	else if(a>150&&a<=400)
	{
		money=0.4663*(a-150)+0.4463*150;
	}
	else
	if(a>400)
	{
		money=0.5663*(a-400)+0.4663*(400-150)+0.4463*150;
	}
	printf("%.1lf",money);
	return 0;
}

