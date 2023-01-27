// Fibonacci series is where the data members of the series can be obtained by adding the previous 2 data members
#include <iostream>
using namespace std;

class series
{
private:
    int a, b, c, i, n;

public:
    series()
    {
        a = 0;
        b = 1;
        i = 2;
    }
    void read();
    void calc();
};

void series::read()
{
    cout << "Enter  the number of values:";
    cin >> n;
}

void series::calc()
{
    cout << a << endl;
    cout << b << endl;
    while (i<n)
    {
        c = a + b;
        a = b; // a takes the value of b
        b = c; // b takes the value of c

        cout << c << "\n";
        i++;
    }
}
int main()
{
    series f;
    f.read();
    f.calc();

    return 0;
}
