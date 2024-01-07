#include<iostream>
#include<iomanip>
using namespace std; // namespace std;
int main(){
    //Constant in c++
    const int a=45; //yaha agr const likha gya to phir yahi variable ka value define karne se error dega
    cout<<"The value of A is :"<<a<<endl;
    // a=66;        //Yaha par variable ka value change ho gya ,,,,isliye bada program me aysa na ho aur galti se backne ke liye we use "const int a=..."
    cout<<"The valuse of new A is:"<<a<<endl;


    //************Manipulator************
    //There are 3 types of manipulator 
    //1."endl"-->used to change the line 
    //2."setw(anyno.)"-->isko use karne ke liye include iomanip header file....any no. ka jagah koi no. diya hoga to utna space choot ke print hoga
    int d=4,e=64,f=4624;
    cout<<"The value of a is :"<<d<<endl;  //4
    cout<<"The value of b is :"<<e<<endl;  //64    --> it is the output without setw()
    cout<<"The value of c is :"<<f<<endl;  //4624


    cout<<"The value of d is :"<<setw(4)<<d<<endl;  //    4
    cout<<"The value of e is :"<<setw(4)<<e<<endl;  //   64   --> This is the output using setw(4)....4 indicates the no. of the gaps type thing .
    cout<<"The value of f is :"<<setw(4)<<f<<endl;  // 4624 

    //Precedence in c++   --->phele konsa term evaluate hoga
    int h=44;
    int lm=((((h*5)+16)+22)-7);
    cout<<"The value of lm is :"<<lm<<endl;
     


    return 0;
}
