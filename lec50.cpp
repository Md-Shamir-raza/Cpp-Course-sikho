#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    float b = 56.6654;
    int *ptr = &a;
    float *gtr = &b;
    // int *ptr = &a;
    cout << "The value at ptr is : " << *ptr << endl;
    cout << "The value at ptr is : " << *gtr << endl;
    // cout<<"The value at ptr is : "<<*ptr<<endl;




    // array using

    int *arr = new int[3]; //isse pura variable pe hi pointers lag jayega 
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;        //isse kya hota hai ki alocate karne ke baad delete kar deta hai ye aur memory free kar deta hai

    // arr[a+1]
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
