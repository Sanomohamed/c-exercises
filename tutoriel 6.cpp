#include <iostream>

using namespace std;

int main()

{
//Variables declaration
	int choice;  //INPUT
	
	//INPUT - Prompt user to enter choice of drink
	cout << "1.Pepsi\t\t2.Coke\t\t3.Water" << endl;
	cout << "Please enter your choice: ";
	cin >> choice;
	
	cout << endl;
	
	while(choice < 1 || choice>3)
	{
		cout<<"\ninvalide input "<<endl;
		cout<< "please enter again: ";
		cin>> choice;
	}
	cout<<endl;
	//PROCESS & OUTPUT
	if (choice == 1)
	{
		cout << "You chose Pepsi" << endl;
		cout << "Price: RM2.50" << endl;
	}
	
	else if (choice == 2)
	{
		cout << "You chose Coke" << endl;
		cout << "Price: RM2.60" << endl;
	}
	
	else if (choice == 3)
	{
		cout << "You chose Water" << endl;
		cout << "Price: RM1.50" << endl;
	}
	
	else
		cout << "Invalid choice!" << endl;




	return 0;
}