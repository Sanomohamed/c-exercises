#include <iostream>

using namespace std;

int main()

{
	int num;
	
	cout<<"enter an integer (0 to quit the program): ";
	cin>> num;

	
	do
	{
	   cout<<" \nenter an integer (0 to quit the program): ";
       	cin>> num;
       	
		if(num!=0)
		cout<<"\nit's triple is "<< num*num*num <<endl;
		
	}while (num!=0 );
	cout<<"termineting the program... " <<endl;
	
	
	
	
	return 0;
}