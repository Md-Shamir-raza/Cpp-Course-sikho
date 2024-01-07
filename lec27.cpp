#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend class calculator;
    public :
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void print(){
        cout<<"your no. is "<<a<< "+"<<b<<"i"<<endl;
    }
};
class calculator{
     public :
     int add(int a,int b){
       return (a+b);
     }
     int sumrealcomplex(complex,complex);
     int sumcompcomplex(complex,complex);
};
int calculator :: sumrealcomplex(complex o1,complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumcompcomplex(complex o1,complex o2){
    return (o1.b + o2.b);
}

int main(){
 
    complex  o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator  cal;
    o1.print();
    o2.print();

    int res = cal.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = cal.sumcompcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
