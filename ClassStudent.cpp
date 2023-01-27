#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    float fee;
    string name;

public:
    Student(int i, float f, string n) // This is a parameterized constructor
    {
        id = i;
        fee = f;
        name = n;
    }
    void Studdetails()
    {
        cout << "Name:" << name << endl;
        cout << "Admision No:" << id << endl;
        cout << "Fees Paid: Ksh " << fee << endl;
    }
    /*~Student()  this is a destructor
    {
        cout << "I am a student";
    }*/
};

int main()
{
    Student s1 = Student(12019, 45000.65, "Mary");
    Student s2 = Student(1350, 15000.67, "Faith");
    s1.Studdetails();
    cout << "  " << endl;
    s2.Studdetails();
}
