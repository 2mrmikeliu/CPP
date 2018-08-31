#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,m,s=0;
	int tree[100][2];
	bool road[10002]={false};
	cin>>l>>m;
	for(int i=0;i<m;i++)
	{
	cin>>tree[i][0]>>tree[i][1];
	for(int j=tree[i][0];j<=tree[i][1];j++)
	road[j]=true;
	}
	for(int j=0;j<=l;j++)if(!road[j])s++;
	cout<<s;
	return 0;
}

