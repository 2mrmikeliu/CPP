#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	bool flag=false;
	int k;
	cin>>k;
	for(int a1=1;a1<=3;a1++)
		for(int a2=0;a2<=9;a2++)
			for(int a3=0;a3<=9;a3++)
				for(int a4=0;a4<=9;a4++)
					for(int a5=0;a5<=9;a5++)
				{
					if((a1*100+a2*10+a3)%k==0&&(a2*100+a3*10+a4)%k==0&&(a3*100+a4*10+a5)%k==0)
					{cout<<a1<<a2<<a3<<a4<<a5<<endl;flag=true;}
					if(a1==3)goto s;
				}
	s:if(!flag)cout<<"No";
	return 0;
}

