#include <iostream>
#include <string>
using namespace std;

float bal, z;
int no, agNo;
int PIN, pin;
bool tr = true;
char sel, s;

class MpesaClasses
{
private:
public:
    float initialBalance();
    void mainMenu();
    void withdrawMenu();
    void airtimeMenu();
    bool checkTrans();
    int myPin();
    float sendMoney();
    int withdraw();
    float buyAirtime();
    void loanSavings();
    void lipa();
    int changePin();
    void myAccountMenu();
};

float MpesaClasses::initialBalance()
{
    cout << "Please input  your default PIN to proceed:\n";
    cin >> pin;
    cout << "Please input an initial balance:\n";
    cin >> bal;
    cout << "Your initial balance is " << bal << " Kshs." << endl;
    return bal;
}
void MpesaClasses::mainMenu()
{
    cout << "\n";
    cout << "Please select an option to proceed:" << endl;
    cout << "1.Send Money\n";
    cout << "2.Withdraw Cash\n";
    cout << "3.Buy Airtime\n";
    cout << "4.Loans and Savings\n";
    cout << "5.Lipa na M-PESA\n";
    cout << "6.My Account\n";
}
void MpesaClasses::withdrawMenu()
{
    cout << "1.From Agent\n";
    cout << "2.From ATM\n";
    cin >> sel;
    switch (sel)
    {
    case '1':
        cout << "Enter agent number\n";
        cin >> agNo;
        break;
    case '2':
        cout << "Enter ATM agent number\n";
        cin >> agNo;
        break;
    default:
        cout << "Invalid selection!\n";
        withdrawMenu();
    }
}
void MpesaClasses::airtimeMenu()
{
    cout << "1.For My Number\n";
    cout << "2.Other Number\n";
    cin >> sel;
    switch (sel)
    {
    case '1':
        cout << "Enter amout:\n";
        cin >> z;
        break;
    case '2':
        cout << "Enter the other number\n";
        cin >> no;
        cout << "Enter amout:\n";
        cin >> z;
        break;
    default:
        cout << "Invalid selection\n";
        airtimeMenu();
    }
}
bool MpesaClasses::checkTrans()
{
    cout << "Would you like to proceed to the main menu? y/n:\n";
    cin >> s;

    if (s == 'y')
    {
        tr = true;
        return tr;
    }
    else if (s == 'n')
    {
        cout << "Thank you for using mpesa services.\n";
        tr = false;
        return tr;
    }
    else
    {
        cout << "Please input y/n for yes or no.\n";
        checkTrans();
    }
    return 0;
}
int MpesaClasses::myPin()
{
    cout << "Enter PIN:\n";
    cin >> PIN;
    if (PIN == pin)
    {
        return PIN;
    }
    else if (PIN != pin)
    {
        cout << "Wrong PIN.Please enter a valid PIN to proceed:\n";
        myPin();
    }
    return 0;
}
float MpesaClasses::sendMoney()
{
    cout << "Enter phone number:\n";
    cin >> no;
    cout << "Enter amount:\n";
    cin >> z;
    if (z < bal)
    {
        bal -= z;
        myPin();
        cout << "You have transferred Kshs " << z << " from your acount to " << no << endl;
        cout << "Your new account balance is " << bal << " Kshs.\n";
    }
    else if (z > bal)
    {
        cout << "You have insufficient funds in your account  to send " << z << "Kshs.\n Please enter an amount lower than your balance.\n ";
    }
    return 0;
}
int MpesaClasses::withdraw()
{
    withdrawMenu();
    cout << "Enter amount to withdraw:\n";
    cin >> z;
    if (z < bal)
    {
        bal -= z;
        myPin();
        cout << "You have succesfully withdrawn Kshs " << z << " from your acount." << endl;
        cout << "Your new account balance is " << bal << " Kshs.\n";
    }
    else if (z > bal)
    {
        cout << "You have insufficient funds in your account  to withdraw " << z << "Kshs.\n";
        cout << " Please enter an amount lower than your balance.\n ";
    }
    return 0;
}
float MpesaClasses::buyAirtime()
{
    airtimeMenu();
    if (z < bal)
    {
        bal -= z;
        myPin();
        cout << "You have succesfully bought airtime worth Kshs " << z << " from your acount." << endl;
        cout << "Your new account balance is " << bal << " Kshs.\n";
    }
    else if (z > bal)
    {
        cout << "You have insufficient funds in your account  to buy airtime worth " << z << "Kshs.\n";
        cout << " Please enter an amount lower than your balance.\n ";
    }
    return 0;
}
void MpesaClasses::loanSavings()
{
    cout << "1.M-Shwari\n";
    cout << "2.KCB M-pesa\n";
}
void MpesaClasses::lipa()
{
    cout << "1.Pay Bill\n";
    cout << "2.Buy Goods and Services\n";
    cout << "3.Pochi La Biashara\n";
}
int MpesaClasses::changePin()
{
    int *p = &pin;
    cout << "Enter new pin:\n";
    cin >> *p;
    cout << "You have successfully changed your PIN to " << pin << endl;
    return pin;
}
void MpesaClasses::myAccountMenu()
{
    cout << "1.Mini Statement\n";
    cout << "2.Check Balance\n";
    cout << "3.Change M-PESA PIN\n";
    cout << "4.Change language\n";
    cout << "5.Update Customer Menu\n";
    cin >> sel;
    switch (sel)
    {
    case '1':
        cout << "Sorry this service is currently unavailable.\n";
        break;
    case '2':
        myPin();
        cout << "Your account balance is " << bal << " Kshs.\n";
        break;
    case '3':
    {
        myPin();
        changePin();
        break;
    }
    case '4':
        cout << "Sorry this service is currently unavailable.\n";
        break;
    case '5':
        cout << "Sorry this service is currently unavailable.\n";
        break;
    default:
        cout << "Invalid selection.\n";
        myAccountMenu();
        break;
    }
}

int main()
{
    MpesaClasses y;
    y.initialBalance();

    while (tr == true)
    {
        MpesaClasses y;
        y.mainMenu();
        cin >> sel;
        switch (sel)
        {
        case '1':
            y.sendMoney();
            y.checkTrans();
            break;
        case '2':
            y.withdraw();
            y.checkTrans();
            break;
        case '3':
            y.buyAirtime();
            y.checkTrans();
            break;
        case '4':
            y.loanSavings();
            y.checkTrans();
            break;
        case '5':
            y.lipa();
            y.checkTrans();
            break;
        case '6':
            y.myAccountMenu();
            y.checkTrans();
            break;
        default:
            cout << "Invalid choice, please select option 1 to 6.\n";
            y.checkTrans();
        }
    }
}