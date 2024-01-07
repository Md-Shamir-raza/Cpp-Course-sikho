#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age of the person:"<<endl;
    cin>>age;
     //*********If else statement using************
     //selection control structure-->if else ladder(baar baar if else if else)

    //if (age<18 && age>1)
    //{
    //    cout<<"YOu are not eligible for party"<<endl;
    //}
    //else if (age==18){
    //    cout<<"YOU are eligible but with the kid pass"<<endl;

    //}
    //else if (age<1){
    //    cout<<"you are not yet born"<<endl;
    //}
    //else
    //cout<<"You are welcome to this party"<<endl;


    ////selection control structure-->Switch case statement
    switch (age)
    {
    case 18:
        cout<<"YOu are eligible with student id"<<endl;
        break;
    case 22:
        cout<<"YOu are eligible "<<endl;
        break;
    default:
        cout<<"No special cases are there";
        break;
    }
    //return 0;

}
