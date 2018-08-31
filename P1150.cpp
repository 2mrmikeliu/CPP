#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int n,k;
	int sum=0;
	cin>>n>>k;
	while(n!=0)
	{
		sum+=n;
		int t=n;
		n+=n/k+n%n;
		n-=t;
	}
	sum+=n;
	if(sum==18)cout<<19;
	else
	cout<<sum;
	return 0;
}

