#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10000][10]={0};
	int pos=0;
	int n;
	cin>>n;
	for(int a=1;a<=3;a++)
		for(int b=1;b<=3;b++)
			for(int c=1;c<=3;c++)
				for(int d=1;d<=3;d++)
					for(int e=1;e<=3;e++)
						for(int f=1;f<=3;f++)
							for(int g=1;g<=3;g++)
								for(int h=1;h<=3;h++)
									for(int i=1;i<=3;i++)
										for(int j=1;j<=3;j++)
										{
											if(a+b+c+d+e+f+g+h+i+j==n)
											{
												arr[pos][0]=a;
												arr[pos][1]=b;
												arr[pos][2]=c;
												arr[pos][3]=d;
												arr[pos][4]=e;
												arr[pos][5]=f;
												arr[pos][6]=g;
												arr[pos][7]=h;
												arr[pos][8]=i;
												arr[pos][9]=j;
												pos++;
											}
										}
	cout<<pos<<endl;
	if(pos!=0)for(int p=0;p<pos;p++){for(int q=0;q<10;q++)cout<<arr[p][q]<<" ";cout<<endl;}

}
