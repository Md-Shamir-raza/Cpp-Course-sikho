#include<iostream>
using namespace std;

class Y;  //phele bata diya ki ek y naam ka classs  v  exist karta hai nhi to line no.12 pe error throw karega

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main(){

 X  i1;
 i1.setValue(23);
 Y j1;

 
 j1.setValue(26);
 //int cal=
 add(i1,j1);
 
 //cout<<cal;
 



  return 0;


}



// The complex problem on friend like method is :
#include<iostream>
class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
    public:
        void indata(int a){
            val1 = a;
        }

        void display(void){
            cout<< val1 <<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            val2 = a;
        }

        void display(void){
            cout<< val2 <<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}
int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.display();
    
    return 0;
}
