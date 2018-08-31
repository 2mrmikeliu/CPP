#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	string str;
	cin>>n;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]+n>'z')str[i]=str[i]+n-'z'+'a'-1;
		else str[i]=str[i]+n;
	}
	cout<<str;
}
