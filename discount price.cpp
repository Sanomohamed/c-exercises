#include <iostream>

using namespace std;

int main()

{
	// variable declaration 
	float c=100, p, d=10, x, fp;
	// output for user
	cout<<" enter your iteam price please: ";
	//user inpout
	cin>> p;
	//dislay user inpout as initial price
	cout<<"the price before discount is: " << p <<endl;
	//proccess to deterninate the discount amount
	x= p*d/c;
	//proccess to determinate final price
	fp= p-x;
	//dislay final price 
	cout<<"the price after discount is :" << fp << endl;
	return 0;
}