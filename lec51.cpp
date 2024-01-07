#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void setdata()
    {
        cout << "The real part for the complex Number is : " << real << endl;
        cout << "The Imaginary part for the complex Number is : " << imaginary << endl;
        cout << "The Imaginary part for the complex Number is : " << imaginary << endl;
    }
};
int main()
{

    complex *ptr = new complex;
    int c, d;
    // cin >> c;
    // cin >> d;

    // this is the usual tarika of doing pointer and all;
    //  (*ptr).getdata(11, 12);

    // (*ptr).setdata();

    // This is the arrow operator
    ptr->getdata(11, 12);

    ptr->setdata();

    return 0;
}
