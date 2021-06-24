#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << " Enter the Id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << " Enter the price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop d;
    d.initCounter();
    d.setPrice();
    d.setPrice();
    d.setPrice();
    d.displayPrice();
    return 0;
}