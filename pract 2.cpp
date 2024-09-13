#include <iostream>
using namespace std;
int main()
{
	int number;
	int doubling,squaring;
	cout<< "enter a number" ;
	cin>> number;
	doubling= number*2;
	squaring= number*number;
	cout<< "the double is:" << doubling << endl;
	cout<< "the squar is :" << squaring << endl;
	return 0;
}