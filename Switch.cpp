#include <iostream>
using namespace std;

int main()
{
	char op;
	float a, b, sum, div, sub, mult;

	cout << "Enter two numbers:";
	cin >> a >> b;
	cout << "Enter the operator:";
	cin >> op;

	switch (op)
	{

	case '+':
		sum = a + b;
		cout << "The sum is:" << sum << endl;
		break;

	case '/':
		div = a / b;
		cout << "The division is:" << div << endl;
		break;

	case '-':
		sub = a - b;
		cout << "The subtraction is:" << sub << endl;
		break;

	case '*':
		mult = a * b;
		cout << "The product is:" << mult << endl;
		break;

		/*	case '%':
			mod= a % b;
			cout<<"The Remainder is:"<<mod<<endl;
			break;*/

	default:
		cout << "Invalid output!";
	}
}