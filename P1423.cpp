#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main() {
	double n,s=0,i=0,k=2;
	cin>>n;
	while(s<n) {
		s+=k;
		k=0.98*k;
		i++;
	}
	printf("%.0lf",i);
	return 0;
}

