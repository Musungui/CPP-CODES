
#include <iostream>
using namespace std;

int a, b, c, d, e, f, g, h;
int z;
int add, minus, divide, multiply, modulus;
bool trFa = true;
void menu()
{
    cout << "Choose an activity: \n1.Add \n2.Subtract \n3.Divide \n4.Multiply \n5.Find remainder\n";
}
int sum(int a, int b)
{
    int sum;
    cout << "Enter 2 numbers:\n";
    cin >> a >> b;
    sum = a + b;
    cout << sum << endl;
    return sum;
}
int subtract(int c, int d)
{
    int subtract;
    cout << "Enter 2 numbers:\n";
    cin >> c >> d;
    subtract = c - d;
    cout << subtract << endl;
    return subtract;
}
int division(int e, int f)
{
    int division;
    cout << "Enter 2 numbers:\n";
    cin >> e >> f;
    divide = e / f;
    return divide;
}
int multiplacation(int g, int h)
{
    int multiplacation;
    cout << "Enter 2 numbers:\n";
    cin >> g >> h;
    multiplacation = g * h;
    return multiplacation;
}
int remain(int i, int j)
{
    int remain;
    cout << "Enter 2 numbers:\n";
    cin >> i >> j;
    remain = i % j;
    return remain;
}
bool check()
{
    cout << "To continue press 1 to stop press 0\n";
    cin >> z;
    if (z == 1)
    {
        trFa = true;
        return trFa;
    }
    else if (z == 0)
    {
        trFa = false;
        return trFa;
    }
    else
    {
        cout << "Wrong entry!";
        check();
    }
    return 0;
}
int main()
{
    int i, j;

    while (trFa == true)
    {
        menu();
        char select;
        cin >> select;

        switch (select)
        {
        case '1':
            sum(i, j);
            check();
            break;
        case '2':
            subtract(c, d);
            check();
            break;
        default:
            break;
        }
    }
}