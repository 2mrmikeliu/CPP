#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{	
		cin>>a;
		if(i!=1&&a>0)cout<<"+";
		if(a!=0){
		if (abs(a)!=1)cout<<a;
		if(a==-1)cout<<"-";
		if(n-i+1==1){cout<<"x"; continue;}
		if(n-i+1!=0)cout<<"x^"<<n-i+1;
		}
	}
	cin>>a;
	if(a==0)return 0;
	else {if (a>0) cout<<"+"<<a; else cout<<a;};
	return 0;
}

