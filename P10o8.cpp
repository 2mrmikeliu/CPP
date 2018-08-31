#include <algorithm>
#include<iostream> 
using namespace std;
int h[10]={0};
int m=1;
int main()
{
	int a=0,b=0,c=0;
	int m=0;
	for(int i=1;i<=9;i++)
	{
	
	for(int j=1;j<=9;j++)
	{
	
	for(int k=1;k<=9;k++)
	{
		m=1;
		a=i+10*j+100*k;
		b=2*a;
		c=3*a;
		h[1]=i;
		h[2]=j;
		h[3]=k;
		h[4]=b%10;
		h[5]=b%100/10;
		h[6]=b/100;
		h[7]=c%10;
		h[8]=c%100/10;
		h[9]=c/100;	
		sort(h+1,h+9+1);
	
	for(int i=0;i<=8;i++)
	{
		if(h[i]-h[i+1]!=-1)
		{
			m=2;
			break;
		}
	}
    		if(m==1)cout<<a<<" "<<b<<" "<<c<<endl;
}
 	
	}
}
}

