#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int max=-1;
	int arr[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		int sum=0;
		for(int j=i+1;j<n;j++)
		{
			int last=arr[j-1];
			if(arr[j]-last==1)
			{
				sum++;
			}
			else {
				if(sum>max){
					max=sum;
					break;
				}
				else
				{
					break;
				}
			}
		}
		
	}
	cout<<max+1;;
	return 0;
}

