#include<iostream>
using namespace std;
int reverse(int n);
int main()
{
 int n,res,digit;
 cin>>n;
 res=reverse(n);
 cout<<res;
}
int reverse(int n)
{
    int d,res=0;
    while(n>0)
    {
        d=n%10;
        res=(res*10)+d;
        n=n/10;
    }
    cout<<res<<endl;
}
