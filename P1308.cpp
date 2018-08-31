#include <vector>
#include<bits/stdc++.h>
using namespace std;
void SplitString(const std::string& s, std::vector<std::string>& v, const std::string& c)
{
  std::string::size_type pos1, pos2;
  pos2 = s.find(c);
  pos1 = 0;
  while(std::string::npos != pos2)
  {
    v.push_back(s.substr(pos1, pos2-pos1));
 
    pos1 = pos2 + c.size();
    pos2 = s.find(c, pos1);
  }
  if(pos1 != s.length())
    v.push_back(s.substr(pos1));
}
int main()
{
	vector<string> wp;
	string f,str;
	int pos=-1,s=-1,first;
	getline(cin,f);
	getline(cin,str);
	SpplitString(f,wp," ");
	transform(f.begin(),f.end(), f.begin(), ::toupper);  
	transform(str.begin(),str.end(), str.begin(), ::toupper); 
	first=str.find(f,0);
	/*do
	{
		pos++;
		s++;
		pos=str.find(f,pos);
	}while(pos!=string::npos);
	if(s==0)cout<<-1;
	else
	cout<<s<<" "<<first;*/
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i]==f)
		s++;
		if(pos==-1)
		{
			first=i
		}
	}
	return 0;
}

