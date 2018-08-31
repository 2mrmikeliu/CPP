#include<iostream>
using namespace std;
struct jz{
	int a[110][110];
};
int n,m;
jz jia(jz a,jz b)
{
	jz c;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			c.a[i][j]=a.a[i][j]+b.a[i][j];	
		}
	}
	return c;
}
jz a,b,c;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a.a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>b.a[i][j];
		}
	}
	c=jia(a,b);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<c.a[i][j]<<" ";
		}
		cout<<endl;
	}
}

