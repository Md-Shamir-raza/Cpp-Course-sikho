#include <iostream>
using namespace std;
class hello
{
    int a;

public:
    hello &setdata(int a) // pointer use kiya gya hai++
    // void setData(int a)
    {
        this->a = a;  // This is used here is like a pointer .....baar baar alag alag variable bana ne accha ek banao usi ko this use karke point kardo
        return *this; // pointer use kiya gya hai ++
    }
    void display()
    {
        cout << "the value of data given is : " << a << endl;
    }
};

int main()
{
    hello A;
    A.setdata(4);
    A.display();
    return 0;
}
