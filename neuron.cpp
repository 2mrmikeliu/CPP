#include<bits/stdc++.h>
using namespace std;
#include "neuron.h"
int main()
{
		neuron<1> n1,n2;
	neuron<2> n3;
	srand(time(NULL));
	while(1)
	{

	double t1;
	cout<<"输入数据：";
	cin>>t1;
	n1.input(t1);
	n2.input(t1);  
	n3.input(n1.sigmoid(n1.sigma()));
	n3.input(n2.sigmoid(n2.sigma()));
	cout<<"结果："<<n3.sigmoid(n3.sigma())<<endl;
	cout<<"输入真实结果：";
	double t2;
	cin>>t2;
	n3.learn(t2,n3.sigmoid(n3.sigma()));  
	n2.learn(t2,n2.sigmoid(n2.sigma()));  
	n1.learn(t2,n1.sigmoid(n1.sigma()));  
	}
}
