#include<bits/stdc++.h>
using namespace std;
set<int> number; 
set<int> r; 
int main(){
    int n,arr[101],tmp;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i]; 
        number.insert(arr[i]);
    }
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){ 
            int tmp=arr[i]+arr[j];
            set<int>::iterator it=number.find(tmp);
            if(it!=number.end()) {  
            r.insert(*it); 
        }
        }
    }
    cout<<r.size();
    return 0;
}
