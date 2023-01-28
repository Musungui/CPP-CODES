#include <iostream>
using namespace std;

struct goods
{
    int description;
    int quantity;
    float price;
};
int main()
{
    goods list;
    list.description = 546;
    list.quantity = 3;
    list.price = 370;

    cout << "Item ID:" << list.description << endl;
    cout << "Quantity:" << list.quantity << endl;
    cout << "Price:" << list.price << endl;
}
