#include<bits/stdc++.h>
using namespace std;
bool used[21]={0};
int arr[21]={0};
int sum=0;
int n,k;
bool sushu (int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num!=i&&num%i==0)
		{
			return true;
		}
	}
	return false;
	
}
void dfs(int m,int c)
{
	if(c==k)
		if(!sushu(m))sum++;
		else return;
	else
	{
		for(int i=0;i<n;i++)
		{
			if(!used[i])
			{
				used[i]=!used[i];
				dfs(m+arr[i],c+1);
			}
		}
	}
}
int main()
{
	
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>arr[i];
	dfs(0,0);
	cout<<sum;
}
