#include <bits/stdc++.h>
using namespace std;
int main()
{
	ifstream f1("index1.html");
	ifstream f2("index2.html");
	ofstream f("index.html");
	string A,B;
	f1>>A;
	f2>>B;
	f<<A<<B;
	
}
