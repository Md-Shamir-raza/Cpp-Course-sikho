#include<iostream>
using namespace std;
int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;       // * ---> (value at) Dereference operator
    int* b=  &a;   // & ---> (Address of) Operator
    cout<<"The Address of the b="<<b<<endl;
    cout<<"The value of the b="<<*b<<endl;
    

    //Pointer to pointer
    int** c= &b;
    cout<<"The address of c is:"<<c<<endl;
    cout<<"The value of c is:"<<**c<<endl;
    return 0;
}
