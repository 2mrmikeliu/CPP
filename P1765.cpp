#include<bits/stdc++.h>
using namespace std;
short key[128]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4,0,0,0,0,0,};
int main()
{
	int sum=0;
	string s;
	/*key['a']=1;
	key['b']=2;
	key['c']=3;
	key['d']=1;
	key['e']=2;
	key['f']=3;
	key['g']=1;
	key['h']=2;
	key['i']=3;
	key['j']=1;
	key['k']=2;
	key['l']=3;
	key['m']=1;
	key['n']=2;
	key['o']=3;
	key['p']=1;
	key['q']=2;
	key['r']=3;
	key['s']=4;
	key['t']=1;
	key['u']=2;
	key['v']=3;
	key['w']=1;
	key['x']=2;
	key['y']=3;
	key['z']=4;
	key[' ']=1;*/
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		sum+=key[s[i]];
	}
	cout<<sum;
}
