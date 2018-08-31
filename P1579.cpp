#include<bits/stdc++.h>
using namespace std;
int sushu(int num)
{
	//if(num==2)return true;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num!=i&&num%i==0)return false;
	}
	return true;
}
int main()
{
	int n;
	cin>>n;
	for(int a1=2;a1<n;a1++)
		for(int a2=2;a2<n;a2++)
		{
			if(a2==4)
			cout<<"";
			if(sushu(a1)&&sushu(a2))
			{
				int a3=n-a1-a2;
				if(a3>0)
				{
					if(sushu(a3))
					{
						cout<<a1<<" "<<a2<<" "<<a3;
						return 0;
					}
				}
			}
		}
}
