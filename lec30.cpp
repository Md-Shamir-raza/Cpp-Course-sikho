#include<iostream>
using namespace std;

class complex{
    int a,b;
    public: 
    complex(int,int);
    void print(){
    cout<<"YOurno."<<a<<"+ "<<b<<"i"<<endl; } 

};
complex::complex(int x,int y){
    a=x;
    b=y;
}
int main(){
    complex a(4,6);
    a.print();


    complex b=complex(5,7);
    b.print();

    return 0;
}  


#include<iostream>
using namespace std;
class  point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"The number in the cartesian form is :"<<"("<<x<<","<<y<<")"<<endl;

    }
};
int main(){
    point p(1, 1);
    p.display();

    point  q(4, 6);
    q.display();
    return 0;
}




