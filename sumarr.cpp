#include<iostream>
#define max 100
using namespace std;
int sum(int a[],int start,int len);
int main()
{
    int a[max];
    int n,i,suma;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    suma=sum(a,0,n);
    cout<<suma;
}
int sum(int a[],int start,int len)
{
    if(start>=len)
    return 0;
    return (a[start]+sum(a,start+1,len));
}
