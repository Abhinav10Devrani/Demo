#include<iostream>
using namespace std;
int multi(int,int);
int main()
{
    int n,res,m;
    cin>>m;
    cin>>n;
    res=multi(m,n);
    cout<<res;
}
int multi(int m,int n)
{
    if(n==1)
        return m;
    else
        return (m*multi(m,n-1));
}
