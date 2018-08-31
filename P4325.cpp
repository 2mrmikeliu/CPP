#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <set>
using namespace std;
set<int> s;
int main()
{	
	int x;
	for(int i=0;i<10;i++)
	{
		
		cin>>x;
		s.insert(x%42);
	}
	cout<<s.size();
	return 0;
}

