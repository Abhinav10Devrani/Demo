#include<iostream>
using namespace std;
int main()
{
 int a[10],i,j,n;
 cin>>n;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
  cin>>a[i];
 }
 }
 for(i=n;i<=1;i--)
 {
 for(j=n;j<=1;j--)
 {
  cin>>a[i];
 }
 }
 cout<<a[i];
}
