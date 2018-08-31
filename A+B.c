#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while(b!=0){
		int _a=a^b;
		int _b=(a&b)<<1;
		a=_a;
		b=_b;
	}
	printf("%d",a);
}

