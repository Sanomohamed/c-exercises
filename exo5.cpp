#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	int m1,m2,m3,m4,m5,average;
	
	cout<<"Please enter student's name: ";
	cin>> name;
    getline(cin,name);

	cout<<"Please enter 5 test marks: ";
	cin>> m1;
	cin>> m2;
	cin>> m3;
	cin>> m4;
	cin>> m5;
	cout<<endl<<endl;
	
	average= (m1 + m2 + m3 + m4 + m5 )/5;
	
	cout<<"student Name: "<<name<<endl;
	getline(cin,name);
	cout<<setw(20)<<"--------------------------"<<endl;
	cout<<"test 1: "<<setw(10)<<" "<<m1<<".0%"<<endl;
	cout<<"test 2: "<<setw(10)<<" "<<m2<<".0%"<<endl;
	cout<<"test 3: "<<setw(10)<<" " <<m3<<".0%"<<endl;
	cout<<"test 4: "<<setw(10)<<" " <<m4<<".0%"<<endl;
	cout<<"test 5: "<<setw(10)<<" "<<m5<<".0%"<<endl;
	cout<<"average: "<<setw(9)<<" "<<average<<".0%"<<endl;
	
	return 0;
}