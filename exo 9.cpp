#include <iostream>

using namespace std;

int main()

{    
    int s1,s2,s3,s4,s5;
    int h1,h2,h3,h4,h5,s;

	cout<<"please enter 5 staff ID: "<<endl<<endl;
	
	Cout<<"ID for staff 1: ";
	cin>>s1;
	Cout<<"ID for staff 2: ";
	cin>>s2;
	Cout<<"ID for staff 3: ";
	cin>>s3;
	Cout<<"ID for staff 4: ";
	cin>>s4;
	Cout<<"ID for staff 5: ";
	cin>>s5;
	cout<<endl<<endl;
	
	cout<<"Please enter the total working hours for each staff...."<<endl<<endl;
	
	cout<<"total working hours for "<<endl;
	cout<<"staff "<<s1;
	cin>>h1;
	cout<<"staff "<<s2;
	cin>>h2;
	cout<<"staff "<<s3;
	cin>>h3;
	cout<<"staff "<<s4;
	cin>>h4;
	cout<<"staff "<<s5;
	cin>>h5;
	cout<<endl<<endl;
	
	s=(h1+h2+h3+h4+h5)*25;
	
	cout<<"The total salary for all staff for the month of november: RM"<<s<<endl;
	
	return 0;
	
	
	
}