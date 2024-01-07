#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
// -----------------BUILD IN DATA TYPES---------------------------------
  cout<<"Enter the value of a:";
  cin>>a;
  cout<<"Enter the value of b:";
  cin>>b;
  cout<<"Enter the value of c:";
  cin>>c;
  cout<<"The value of their sum is "<<a+b+c;
 //------------------FLOAT DOUBLE AND LONG DOUBLE LITERALS----------------------
 float d=34.4f;
 long double e = 34.4l;
 cout<<"The size of 34.4 is :"<<sizeof(34.4)<<endl;
 cout<<"The size of 34.4f is :"<<sizeof(34.4f)<<endl;
 cout<<"The size of 34.4l is :"<<sizeof(34.4l)<<endl;
//--------------REferance variable----------------------------
float x=455;
float & y=x;
cout<<x<<endl;
cout<<y<<endl;
//----------------Type casting----------------------------
int i =45;
float s=45.66;
cout<<"The value of a:"<<(float)i<<endl;
cout<<"The value of b:"<<(int)s<<endl;
cout<<"The value of total:"<<i+(int)s<<endl;

return 0;


 
}
