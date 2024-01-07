#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1){
        return 1;
    }
    else
    return n*factorial(n-1);  //recurtion use hote hue
}
int fibo(int z)
{
  if(z<2){
    return 1;
  }
  else
  return fibo(z-2)+fibo(z-1);    //yaha v recursion use hote hue
}
int main(){
    int a;
    cout<<"Enter the number for the factorial and to give the number on that position of fibonacci series";
    cin>>a;
    cout<<"The factorial is : "<<factorial(a)<<endl;
    cout<<"The value on that position"<<fibo(a)<<endl;
    return 0;
}
