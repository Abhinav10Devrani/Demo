#include<iostream>
int factorial(int n);
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Factorial of the number is :"<<factorial(n);
    return 0;
}
 int factorial(int n)
 {
     if(n>1)
        return n*factorial(n-1);
     else
        return 1;
 }
