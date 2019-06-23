#include<iostream>
using namespace std;
int reverse(int a[],int start,int end);
int main()
{
    int n,a[100],i,rev;
    cout<<"enter the limit"<<endl;;
    cin>>n;
    cout<<"enter the array"<<endl;;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rev=reverse(a,0,n-1);
    cout<<"reverse of the array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int reverse(int a[],int start,int end)
{
    int temp,rev;
    if(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        reverse(a,start+1,end-1);
    }
    return 0;
}
