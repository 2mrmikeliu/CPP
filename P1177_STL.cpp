#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++)
		 cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
	return 0;
}

