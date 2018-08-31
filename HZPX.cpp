#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<cstring>
using namespace std;
int source[10],flag[10],res[10];
int sort(){
    memset(flag,1,sizeof(flag));
    int num = 10,count=0;
    while(num){
        int t =rand()%10;   //生成0-9之间的数
        if(flag[t]){
            res[count++] = source[t];
            num--;
        }
    }
    for(int i=0;i<9;i++){
        if(res[i]>res[i+1]){      //只有是从小到大的排列才行
            return 0;
        } 
    }
    return 1;
}
int main(){
	int n=0;
    int count = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>source[i];
    }
    while(sort()!=1){
        count++;
    }
    for(int i=0;i<n;i++){
        cout<<source[i];
        cout<<" ";
    }
    cout<<endl<<count;
    return 0;
}
