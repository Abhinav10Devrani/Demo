#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
 int a,b,res,k,i;
 cin>>a;
 cin>>b;
 res=gcd(a,b);
 cout<<res;
}
int gcd(int a,int b)
{
if(b==0)
{
 return a;
}
else
{
 return gcd(b,a%b);
}


}
