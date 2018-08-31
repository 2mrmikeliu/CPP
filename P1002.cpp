#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
const int up[8][2]={{1,2},{2,1},{-1,2},{-2,1},{-1,-2},{-2,-1},{1,-2},{-2,1}};
int dp[20][20]={0};
int hx,hy;
int a,b;
bool beEaten(int x,int y)
{
	bool flag=false;
	for(int i=0;i<4;i++)
	{
		if(hx+up[i][0]!=x&&hy+up[i][1]!=y)flag=false;
		else
		{
			return true;
			}
	}
	return flag;
}
void printdp(int n,int m)
{
	cout<<"DP at "<<n<<","<<m<<endl; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl; 
	}
}
int main()
{
	dp[0][0]=1;	
	cin>>a>>b>>hx>>hy;
	for(int i=0; i<a; i++) {
		for(int j=0;j<b;j++)
		{
			if(i!=0||j!=0)
			{
				if(!beEaten(i,j))
				{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1])+1;
					printdp(a,b);
				}
			}
		}
	}
	cout<<dp[a-1][b-1];
	return 0;
}

