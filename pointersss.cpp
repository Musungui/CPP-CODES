#include <iostream>
#include <string>
using namespace std;
int main (){
    string food = "burgers";
    string *ptr = &food;
    cout << ptr;
    cout << *ptr << endl;
}