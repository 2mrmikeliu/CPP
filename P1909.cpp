#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cmath>
#include<climits>
using namespace std;
int main() {
	int n,l[3][2],sum,money,mm=2147483647,minpack=2147483647;
	cin>>n;
	for(int i=0; i<3; i++) {
		cin>>l[i][0]>>l[i][1];
		if(l[i][0]<minpack)minpack=l[i][0];
	}

	for(int a=0; a<=n/minpack+1; a++) {
		sum=l[0][0]*a;
		money=l[0][1]*a;
		if(sum>=n&&money<mm)mm=money;
	}
	for(int b=0; b<=n/minpack+1; b++) {
		sum=l[1][0]*b;
		money=l[1][1]*b;
		if(sum>=n&&money<mm)mm=money;
	}
	for(int c=0; c<=n/minpack+1; c++) {
		sum=l[2][0]*c;
		money=l[2][1]*c;
		if(sum>=n&&money<mm)mm=money;
	}
	cout<<mm;
	return 0;
}

