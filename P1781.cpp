#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
bool comp(string a,string b)
{
	if(a.length()>b.length())return true;
	else if(a.length()<b.length() )return false;
	else 
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>b[i])return true;
		else if(a[i]<b[i]) return false;
	}
}
int main()
{
	int n,temp;
	int pos[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	string arr[21],t,e;
	cin>>n;
	getline(cin,e);
	for(int i=0;i<n;i++)
	{
		getline(cin,arr[i]);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
		{
			if(comp(arr[i],arr[j]))
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				temp=pos[i];
				pos[i]=pos[j];
				pos[j]=temp;
			}
		}
	cout<<pos[0]<<endl<<arr[0];
	return 0;
}

