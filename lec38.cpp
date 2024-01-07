// This program is made when the derived class is derived publically

#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata();
    int display();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata()
{
    return data1;
}
int base ::display()
{
    return data2;
}
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata();
}
void derived ::display()
{
    cout << "value of data 1 is : " << getdata() << endl;
    cout << "value of data 2 is : " << data2 << endl;
    cout << "value of data 3 is : " << data3 << endl;
}
int main()
{
    derived dr;
    dr.setdata();
    dr.process();
    dr.display();
    return 0;
}





// This program is made when the derived class is derived privately

#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata();
    int display();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata()
{
    return data1;
}
int base ::display()
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    setdata();            //publically jab derive karte hai to object banakr setdata call karte hai lekin privately agr kisi class ko derive karte hai to yaha pe aajata hai
    data3 = data2 * getdata();
    
}
void derived ::display()
{
    cout << "value of data 1 is : " << getdata() << endl;
    cout << "value of data 2 is : " << data2 << endl;
    cout << "value of data 3 is : " << data3 << endl;
}
int main()
{
    derived dr;

    dr.process();
    dr.display();
    return 0;
}
