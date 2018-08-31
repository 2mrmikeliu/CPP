#include<bits/stdc++.h>
using namespace std;
bool arr[102]={false};
int pos=0;
int main()
{
	int n,m;
	cin>>n>>m;
	int q=n;
	while(q!=0)
	{
		for(int i=1;i<=m;i++)
		{
			do
			{
				pos++;
				if(pos>n)pos=1;
			}
			while(arr[pos]==true);
		}
		arr[pos]=true;
		cout<<pos;
		cout<<" ";
		q--;
	}
}
