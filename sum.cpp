#include<iostream>
using namespace std;
int sum(int n);
int main()
{
int n,res;
cin>>n;
res=sum(n);
cout<<res;
}
int sum(int n)
{
    if (n!=0)
    {
        return(n%10+sum(n/10));
    }
    else
        return 0;
}
