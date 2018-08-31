#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
 
int main ()
{
    
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>板聊</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   ifstream f1("log.txt");
   string str;
   getline(f1,str);
   do{
   		cout<<"<p>"<<str<<"</p>";
   		f1>>str;
   }while(!f1.eof());
   //cout << "<a href=""http://"<<getenv("SERVER_NAME")<<"/index.html"">点击发消息</a>\n";
   cout << "</body>\n";
   cout << "</html>\n";
   
   return 0;
}
