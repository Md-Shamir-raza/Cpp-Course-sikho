#include<iostream>
using namespace std;
int main()
{
    int num1,num2;              //cin>> is used to take value from user
    cout<<"Enter the value of num1:";  //"<<"This is a Insertion operator.....iska mtlb jo v hai likha hua usko screen me dikhao
    cin>>num1;
    cout<<"Enter the value of num2:";  //"cin>>" is used here to take the values of the num1 and num2 from the user.......">>" isko bola jata hai extraction operator mtlb ki jo value mil rha hai woh lelo
    cin>>num2;
    cout<<"The total value is :"<<num1*num2;
    return 0;
}
