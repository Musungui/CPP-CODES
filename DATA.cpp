#include<iostream>
using namespace std;
string name,dept,crs,date;
	int admno,phone;
	char gen;
void input()
{
	
	cout<<"STUDENT DATA ENTRY FORM"<<endl;
	cout<<"ENTER STUDENT NAME:";
	cin>>name;
	cout<<"ENTER ADMISSION NUMBER:";
	cin>>admno;
	cout<<"ENTER GENDER M/F:";
	cin>>gen; 
	cout<<"STUDENT PHONE NUMBER:";
	cin>>phone;
	cout<<"REGISTRATION DATE:";
	cin>>date;
	cout<<"DEPARTMENT:";
	cin>>dept;
	cout<<"COURSE:";
	cin>>crs;
	
};
void output()
{
	cout<<"NAME:"<< name<<endl;
	cout<<"ADMISSION NUMBER:"<<admno<<endl;
	cout<<"GENDER:"<<gen<<endl;
	cout<<"PHONE NUMBER:"<<phone<<endl;
	cout<<"REGISTRATION DATE:"<<date<<endl;
	cout<<"DEPARTMENT:"<<dept<<endl;
	cout<<"COURSE:"<<crs<<endl;
};

int main()
{
	input();
	output();
}


	
	

