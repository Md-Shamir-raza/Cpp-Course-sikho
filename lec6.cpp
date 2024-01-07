//There are two types of header files.
//1.System header file-->comes with the compiler.
#include<iostream>
//2.User defined header file --> written by the compiler
//for example : #include"this.h"-->This will produce an error when this.h file doesn't exist.
using namespace std;
int main()
{
    /*Assignment operator*/
    int a=6,b=5;
    //Arthmetic operations are following : +,-,%,*,/,++a,--a,a++,a--;
    cout<<"The value of a+b:"<<a+b<<endl;
    cout<<"The value of a-b:"<<a-b<<endl;
    cout<<"The value of a/b:"<<a/b<<endl;
    cout<<"The value of a%b:"<<a%b<<endl;
    cout<<"The value of a+b:"<<a*b<<endl;
    cout<<"The value of ++a:"<<(++a)<<endl;
    cout<<"The value of --a:"<<(--a)<<endl;
    //The comparison operator are following : <,>,==,<=,>=,!=;
    cout<<"The value of a<b:"<<(a<b)<<endl;
    cout<<"The value of a==b:"<<(a==b)<<endl;
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;
     // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 
    
    return 0;
}
