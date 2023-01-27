#include<iostream>
using namespace std;

int main(){
	int Cel,Fah;
	const float fah=1.8;
	cout<<"Enter temperature value in Celsius "<<endl;
	cin>>Cel;
	
	Fah=(Cel*fah)+32;
	
	cout<<"The temperature in Fahrenheit is= "<<Fah;
}
