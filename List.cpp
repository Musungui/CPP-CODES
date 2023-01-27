#include <iostream>
using namespace std;
int list[50], size, i, num, pos, del, j, found = 0;
void insert()
{

    cout << "Enter the number of elements:" << endl;
    cin >> size;
    cout << "Enter the elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> list[i];
    }
    cout << "The elements are:";
    for (i = 0; i < size; i++)
    {
        cout << list[i] << "\t";
    }
    cout << "\nEnter number to insert:";
    cin >> num;
    cout << "\nEnter position to insert:";
    cin >> pos;
    if (pos <= 0 || pos > size + 1)
    {
        cout << "invalid position:" << endl;
    }
    else
    {
        for (i = size; i > pos; i--)
        {
            list[i] = list[i - 1];
        }
        list[pos - 1] = num;
        size++;
        cout << "The new list is:";
        for (i = 0; i < size; i++)
        {
            cout << list[i] << "\t";
        }
    }
}
void remove()
{
    cout << "\nEnter element to delete:" << endl;
    cin >> del;
    for (i = 0; i < size; i++)
    {
        if (list[i] == del)
        {
            for (j = i; j < (size - 1); j++)
                list[j] = list[j + 1];
            found = 1;
            i--;
            size--;
        }
    }
    if (found == 0)
        cout << "Element not present in the array!" << endl;
    else
    {
        cout << "Element Deleted Successfully" << endl;
        cout << "The new array is:";
        for (i = 0; i < size; i++)
            cout << list[i] << "\t";
    }
    cout << endl;
};

int main()
{

    insert();
    remove();

    return 0;
};
