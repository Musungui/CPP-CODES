#include <iostream>
using namespace std;
class Animals
{
	private:
		
	public:
		void charAnimal()
		{
			cout<<"Has life"<<endl;
		}	
};
class Vertebrates:public Animals
{
	private:
	
	public:
		 void	charVert()
	   {
	   	        cout<<"Has a backbone"<<endl;
	   }
		
};
class warmBlooded : public Vertebrates
{
	private:
		
	public:
		void charWarm()
		{
			cout<<"Warm blooded"<<endl;
		}
};
class coldBlooded:public Vertebrates
{
	private:
	public:
		void charCold()
		{
			cout<<"Cold blooded"<<endl;
		}
		
};
class Mammals:public warmBlooded
{
	private:
		int number;
		string name;
	public:
		Mammals(string n,int no)
		{
			name=n;
			number=no;
		}
		void charMammal()
		{
			cout<<"Animal:"<<name<<endl;
			cout<<"Number:"<<number<<endl;
			cout<<"Characteristics:"<<endl;
			cout<<"Female Have Mammary glands"<<endl;
		}	
};
class Fish:public coldBlooded
{
	private:
		int Number;
		string Name;
	public:
		Fish(string N,int No)
		{
			Name=N;
			Number=No;
		}
		void charFish()
		{
			cout<<"Animal:"<<Name<<endl;
			cout<<"Number:"<<Number<<endl;
			cout<<"Characteristics:"<<endl;
			cout<<"Has Fins and scales"<<endl;
		}	
};
int main()
{
	Mammals m=Mammals("Dog",20);
	Fish f=Fish("Salmon",50);
	m.charMammal();
	m.charWarm();
	m.charVert();
	m.charAnimal();
	cout<<"    "<<endl;
	f.charFish();
	f.charCold();
	f.charVert();
	f.charAnimal();	
}
