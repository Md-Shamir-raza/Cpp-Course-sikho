#include <iostream>
using namespace std;
class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id is of the item is:" << id << endl;
        cout << "The price of the item is  :" << price << endl;
    }
};

int main()
{
    int tm = 2;

    shopItem *ptr = new shopItem[tm];
    shopItem *tmptr = ptr;
    int p, i;
    float q;
    for (int i = 0; i < tm; i++)
    {
        /* code */
        cout << "Enter the Id of Item " << i + 1 << endl;
        cin >> p;
        // cout<<"Enter the Id of Item "<<i+1<<endl;
        cout << "Enter the Price of Item " << i + 1 << endl;
        cin >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < tm; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        tmptr->getData();
        tmptr++;
    }

    return 0;
}
