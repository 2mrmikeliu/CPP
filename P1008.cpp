#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
	int a[9];
	for (a[0]=1;a[0]<=9;a[0]++)
		for (a[1]=1;a[1]<=9;a[1]++)
			for (a[2]=1;a[2]<=9;a[2]++)
				for (a[3]=1;a[3]<=9;a[3]++)
					for (a[4]=1;a[4]<=9;a[4]++)
						for (a[5]=1;a[5]<=9;a[5]++)
							for (a[6]=1;a[6]<=9;a[6]++)
								for (a[7]=1;a[7]<=9;a[7]++)
									for (a[8]=1;a[8]<=9;a[8]++)
										{
											int num1,num2,num3;
											bool q,w,e,r,t,y,u,i;
											num1=a[0]*100+a[1]*10+a[2]*1;
											num2=a[3]*100+a[4]*10+a[5]*1;
											num3=a[6]*100+a[7]*10+a[8]*1;
											if(a[0]!=a[1]&&a[0]!=a[2]&&a[0]!=a[3]&&a[0]!=a[4]&&a[0]!=a[5]&&a[0]!=a[6]&&a[0]!=a[7]&&a[0]!=a[8]&&a[1]!=a[2]&&a[1]!=a[3]&&a[1]!=a[4]&&a[1]!=a[5]&&a[1]!=a[6]&&a[1]!=a[7]&&a[1]!=a[8]&&a[2]!=a[3]&&a[2]!=a[4]&&a[2]!=a[5]&&a[2]!=a[6]&&a[2]!=a[7]&&a[2]!=a[8]&&a[3]!=a[4]&&a[3]!=a[5]&&a[3]!=a[6]&&a[3]!=a[7]&&a[3]!=a[8]&&a[4]!=a[5]&&a[4]!=a[6]&&a[4]!=a[7]&&a[4]!=a[8]&&a[5]!=a[6]&&a[5]!=a[7]&&a[5]!=a[8]&&a[6]!=a[7]&&a[6]!=a[8]&&a[7]!=a[8])
											{
												double d1=double(num1)/num2,d2=double(num3)/num2;
												/*if(d1==0.5)
												{
													printf("Debug:%d %d %d accept d1=%f d2=%f\n",num1,num2,num3,d1,d2);
													if(d2==1.5)printf(" warning:d2==1.5\n");
												}*/
												if(d1==0.5&&d2==1.5)
												cout<<num1<<' '<<num2<<' '<<num3<<"\n"; 
											}
										}
	return 0;
}

