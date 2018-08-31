#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int arr[10],hig,s=0;
	for (int i=0;i<10;i++)
	{
	cin>>arr[i];
	}
	cin>>hig;
	for (int i=0;i<10;i++)
	{
		if(hig+30>=arr[i])s++;
	}
	cout<<s;
	return 0;
}

