#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	unsigned long long sum=1;
	int x,n;
	cin>>x>>n;
	for(int i=0;i<n;i++)
	{
		sum=sum+sum*x;
	}
	cout<<sum;
	return 0;
}

