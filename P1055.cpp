#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int f[14];
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='X') f[i]=10;
		else
		f[i]=s[i]-'0';
	}
	if((f[0]*1+f[2]*2+f[3]*3+f[4]*4+f[6]*5+f[7]*6+f[8]*7+f[9]*8+f[10]*9)%11==f[12])cout<<"Right";
	else
	{
	for(int i=0;i<12;i++)
	{
		cout<<char(f[i]+'0');
	}
	if((f[0]*1+f[2]*2+f[3]*3+f[4]*4+f[6]*5+f[7]*6+f[8]*7+f[9]*8+f[10]*9)%11==10)cout<<"X";else cout<<(f[0]*1+f[2]*2+f[3]*3+f[4]*4+f[6]*5+f[7]*6+f[8]*7+f[9]*8+f[10]*9)%11;
	}
	return 0;
}

