#include <iostream>

using namespace std;

int main()

{
	char choice = 'Y';
	int mark;
	int total = 0, student = 0, average;
	
		cout << "enter test mark: ";
		cin>> mark;
		cout<<"do you want to process to re-enter the test mark? (press y for yes , N for no): "; 
		cin>>choice;
		
	while(choice == 'y' || choice == 'n')
	{
		cout << "enter test mark: ";
		cin>> mark;	
		cout<<"do you want to process to re-enter the test mark? (press y for yes , N for no): "; 
		cin>>choice;
 
    
	
	}
		if(mark >= 0 || mark <=100)
		{
			student++;
			total+=mark;	
		}
		else
		cout<<"invalide inpout"<<endl;
		
 	average= total/student;
 	
	cout<<"total number of student is: "<<student<<endl;
	cout<<"total number of mark is: "<< total <<endl;
	cout<<"average mark is "<<average<<endl;
	
	
	
	
 return 0;
}