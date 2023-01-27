#include <iostream>
using namespace std;

int main()
{
    int m, sum = 0;
    string marks[5];
    cout << "Enter the names for five students:\n";
    for (m = 0; m < 5; m++)
    {
        cin >> marks[m];
    }
    cout << "The names in order are: ";
    for (m = 0; m < 5; m++)
    {
        cout << "\n"
             << marks[m];
    }
    cout << endl;

    cout << "The names in reverse order are: ";
    for (m = 4; m >= 0; m--)
    {
        cout << "\n"
             << marks[m];
    }
}