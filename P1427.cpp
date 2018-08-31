#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int arr[101]={0},i=0;
	cin>>arr[i];
	while(arr[i]!=0)
	{
		i++;
		cin>>arr[i];
	}
	
	for(int j=i-1;j>=0;j--)cout<<arr[j]<<" ";
}

