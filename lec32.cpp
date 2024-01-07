#include<iostream>
using namespace std;
 class hell
 {
 private:
    int data,data1;
 public:
    hell(int a,int b=9){  //phele se constructor me ek value dediye agr value user diya to thik nhi to b=9 use ho jayega
        data=a;
        data1=b;
    }
    void print();
 };
 void hell::print(){
    cout<<"The numbers are:"<<data<<"and"<<data1<<endl;
 }
 
 
 
int main(){
    hell a1(2);
    a1.print();

    return 0;
}
