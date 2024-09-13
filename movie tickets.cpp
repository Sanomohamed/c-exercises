#include <iostream>
#include <iomanip>

using namespace std;

int main ()

{
	//Declaration and assign value
	double price = 20.50;
	int tickets = 0;
	double total;
	
	cout << fixed << setprecision(2);
	
	//dislay header
	cout << setw(40)  << setfill ('*') << "*" << endl;
	cout << "movie"   << setfill (' ') << setw(35) << "price (Rm)" << endl;
	cout <<"------"   << setw(35) <<"------" <<endl;
	cout << "Godzilla vs kong" << setw(22) << price << endl;
	cout << setw(40)  << setfill('*') << "*" << endl;
	
	//input = prompt user for no. of tickets
	cout << "\nHow namy tickets do you want to buy?: ";
	cin >> tickets;
	
	//process
	total= tickets * price;
	
	//output
	cout<< "\ntotal: RM" << total <<endl;
	
	return 0;
}