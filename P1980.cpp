#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n,x,sum=0,i,s;
	cin>>n>>x;
	for(i=1;i<=n;i++)
	{
		s=i;
		while(s>0)
		{
			if(s%10==x)sum++;
			s/=10;
		}
	}
	cout<<sum;
	return 0;
}

