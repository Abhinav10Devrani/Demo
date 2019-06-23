#include<iostream>
void rev(int);
using namespace std;
int main()
{
int n;
cout<<"enter a number"<<endl;
cin>>n;
rev(n);
}
void rev(int n)
{
    int n1,d,rn=0;
    n1=n;
    while(n>0)
    {
        d=n%10;
        rn=(rn*10)+d;
        n=n/10;
    }
    if(n1=rn)
        cout<<n1<<"is a palindrome"<<endl;
         else
        cout<<n1<<"is not a palindrome"<<endl;
}
