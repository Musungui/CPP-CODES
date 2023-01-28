#include <iostream>
using namespace std;

class Stack
{
private:
	int top;
	int Arr[5];

public:
	Stack()
	{
		top = -1;
		for (int i = 0; i < 5; i++)
		{
			Arr[i] = 0;
		}
	}
	//		Checks if the stack is empty
	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
			return false;
	}
	//	checks if the stack is full
	bool isFull()
	{
		if (top == 4)
		{
			return true;
		}
		else
			return false;
	}
	//	Push adds elements into the stack
	void push(int value)
	{
		if (isFull())
		{
			cout << "Stack overflow" << endl;
		}
		else
			top++;
		Arr[top] = value;
	}
	//	Pop removes elements from the stack
	int pop()
	{
		int popValue;
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else
			int popValue = Arr[top];
		Arr[top] = 0;
		top--;
		return popValue;
	}
	//		Returns the number of items from the stack
	int count()
	{
		return (top + 1);
	}
	// Passes a position and returns the value
	int peek(int pos)
	{
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
			return 0;
		}
		else
		{
			return Arr[pos];
		}
	}
	// Changes the value at a particular position
	void change(int pos, int val)
	{
		Arr[pos] = val;
		cout << "Value changed at position " << pos << endl;
	}
	void display()
	{
		cout << "The values in the stack are:" << endl;
		for (int i = 4; i >= 0; i--)
		{
			cout << Arr[i] << endl;
		}
	}
};
int main()
{
	Stack s1;
	int option, position, Value;
	do
	{
		cout << "Select operation to perform Or 0 to exit" << endl;
		cout << "1.Push()" << endl;
		cout << "2.Pop()" << endl;
		cout << "3.isEmpty()" << endl;
		cout << "4.isFull()" << endl;
		cout << "5.Peek()" << endl;
		cout << "6.Count()" << endl;
		cout << "7.Chage()" << endl;
		cout << "8.Display()" << endl;
		cout << "9.Clear Screen()" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "Enter an item to push to the stack" << endl;
			cin >> Value;
			s1.push(Value);
			break;
		case 2:
			cout << "Pop function called poped value is:" << s1.pop() << endl;
			break;
		case 3:
			if (s1.isEmpty())
			{
				cout << "Stack is empty" << endl;
			}
			else
				cout << "Stack is not empty" << endl;
			break;
		case 4:
			if (s1.isFull())
			{
				cout << "Stack is full" << endl;
			}
			else
				cout << "Stack is not full" << endl;
			break;
		case 5:
			cout << "Enter position of item you want to peek" << endl;
			cin >> position;
			cout << "Peek function called. Value at position " << position << "is" << s1.peek(position) << endl;
			break;
		case 6:
			cout << "Cout function called. Number of items in the list is" << s1.count() << endl;
			break;
		case 7:
			cout << "Change Function called" << endl;
			cout << "Enter the position of item you want to change:" << endl;
			cin >> position;
			cout << "Enter the Value to Change" << endl;
			cin >> Value;
			s1.change(position, Value);
			break;
		case 8:
			cout << "Display Function called" << endl;
			s1.display();
			break;
		case 9:
			system("cls");
			break;
		default:
			cout << "Enter proper option Number" << endl;
		}

	} while (option != 0);

	return 0;
}
