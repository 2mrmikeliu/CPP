#include<bits/stdc++.h>
using namespace std;
set <int> s;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int t;
		cin>>t;
		s.insert(t);
	}
	cout<<s.size()<<endl;
	set<int>::iterator b1=s.begin();
	set<int>::iterator e1=s.end();
	for(;b1!=e1;++b1)cout<<*b1<<" ";
	return 0;
}
