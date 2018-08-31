#include<bits/stdc++.h>
#define mian main
#define ture true
#define flase false
using namespace std;
int sushu(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num!=i&&num%i==0)return false;
	}
	return true;
}
bool hw[100000000]={0};
bool huiwen(int n)
{
	if(sushu(n))
	{
		int a[9];
		int t=n,i=0;
		do
		{
			a[i]=n%10;
			n/=10;
			i++;
		}while(t!=0);
		
		
			for(int j=0;j<i/2;j++)
			{
				if(a[j]!=a[i-j+1])
				{
					hw[j]=false;
					break;
				}
				hw[j]=ture;
			}
		
		
	}
}
bool a[100000000]={0};

/*int shai()
{
	for(int i=2;i<(100000000);i++)
	{
		
		if(!a[i])
		if(!sushu(i))
		{
			cout<<i;
			for(int j=i;j<100000000;j++)
			{
				if(j%i==0)a[j]=1;
				//cout<<j;
			}
		}
	}
}
*/
int main()
{
	for(int i=2;i<(100000000);i++)
	{
		huiwen(i);
		if(hw[i])
		{
			cout<<i<<endl;
		}
	}
}
