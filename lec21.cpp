#include<iostream>
using namespace std;
class student{
    private: 
    string religion;
    int age;
    public: 
    string name;
    int cla,roll,uni_id;
    void setdata(string religion,int age);
    void getdata(){
        cout<<"The Name of the student :"<<name<<endl;
        cout<<"His/Her age : "<<age<<endl;
        cout<<"His/Her religion : "<<religion<<endl;
        cout<<"His/Her class : "<<cla<<endl;
        cout<<"His/Her roll number :"<<roll<<endl;
        cout<<"His/Her unique id:"<<uni_id<<endl;
        
    }
};
//void student::setdata(string religion, int age)
void student :: setdata(string rel,int ag)
    {
        religion = rel;
        age=ag;
    }
int main(){
    student ob;
    ob.cla=12;
    ob.name="Md Shamir raza Quraishi";
    ob.roll=9;
    ob.uni_id=7038355;
    ob.setdata("Muslim",19);
    ob.getdata();

    return 0;
}
