#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Raised (int a, int b)
{	double result;
    result=pow(a,b);
    return result;
}
float  Square_Root (int a, int b)
{	float Result;
    Result=sqrt(a);
    cout<<fixed<<setprecision(2)<<Result;
   
    return Result;
}

int main()
{
    int a, b;

    cout <<"Enter the first Number:";
    cin >> a;
    cout << "Enter the second Number:";
    cin >> b;

    
	 cout <<a<<" Raised to "<<b<<" is: "<< Raised(a,b) << endl;
     cout << "The square root of "<<a<<" is:" << Square_Root(a,b) << endl;
     

    return 0;
}
