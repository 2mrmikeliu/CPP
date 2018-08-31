
#include<bits/stdc++.h>
using namespace std;
long long arr[100001];
int n;
void qs(int l,int r)
{
    int q,i=l,j=r,base;
    if(i>j)return;
    base=arr[j];
    while(i!=j)
    {
        while(arr[j]>=base&&i<j)j--;
        while(arr[i]<=base&&i<j)i++;
        if(i<j)
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    arr[l]=arr[i];
    arr[i]=base;
    qs(l,i-1);
    qs(i+1,r);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    qs(0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
} 
