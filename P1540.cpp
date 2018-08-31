#include <bits/stdc++.h>
using namespace std;
class que
{
	public:
		int list[10000];
		int head=1;
		int tail=0;
		inline int getlen()
		{
			if(tail-head<0)
			return -1;
			else
			return tail-head+1;
		}
		int push(int add)
		{
			
			tail++;
			list[tail]=add;
		};
		int pull()
		{
			if(tail-head-1<0)return -1;
			else {head++;return 0;}
		}
		int find(int num)
		{
			int i;
			for(i=head;i<=tail;i++)
			{
				if(list[i]==num)return i;
			}
			return -1;
		}
};
int main()
{
	que queue;
	int m,n,s,t=0;
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		bool flag=false;
		int pos=queue.find(s);
		if(pos==-1)
		{
			if(queue.getlen()!=m)
			{
				queue.push(s);
				t++;
			}
			else
			{
				queue.pull();
				queue.push(s); 
				t++;
			}
		}
	}
	cout<<t;
	return 0;
}

