#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int n,arr[101];
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for (int i=0;i<n;i++)
	{
		int s=0;
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])s++;
		}
		cout<<s<<" ";
	}
	return 0;
}

