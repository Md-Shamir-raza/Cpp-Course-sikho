#include<iostream>
using namespace std;
class Number
{
private:
    int a;
public:
    Number();
    Number(int num);
     // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"copy constructor formed!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"No. for object"<<a<<endl;
    }
};

Number::Number()
{ 
    a=0;
}

Number::Number(int num)
{ 
    a=num;
}

int main(){
    Number x,y,z(46),z2;
    x.display();
    y.display();
    z.display();
     Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y
    return 0;
}
