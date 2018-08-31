#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int sum=0;
	int l,r;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		int t=i;
		while(i!=0)
		{
			if(i%10==2)sum++;
			i/=10;
		}
		i=t;
	}
	cout<<sum;
	return 0;
}

