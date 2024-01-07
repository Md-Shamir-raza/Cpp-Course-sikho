#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
            constructor(argument_list):initialization-section
            {
                assignment + other code;
            }
            class Test(int i,int j):a(i),b(j)
            {
                constructor body
            }
            //jo  chiz phele likha hoga wo phele execute hota hai
*/
class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(a+j)
    //Test(int i, int j) : b(i), b(a+j)    Execute hoga lekin garbage value return karega kyuki phele a define kiya gya upr isliye usko b nhi milega
    //Test(int i, int j) : a(i), b(a*j)
    Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor is executed" << endl;
        cout << "The value of a is : "<<a << endl;
        cout << "The value of b is : " <<b<< endl;
    }
};

int
main()
{
    Test t(4, 5);

    return 0;
}
