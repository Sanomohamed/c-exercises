#include <iostream>

using namespace std;

int main()
{
	//variables
	string name;
	int year, age;
	
	//input
	cout << "enter your name \n";
	getline(cin,name);
	
	cout << " type the year of birth \n";
	cin >> year;
	
	//process
	age = 2022-year;
	
	//output
	cout << endl;
	cout << "hi " << name << "you will be " << age << "this year " << endl; 
	
}