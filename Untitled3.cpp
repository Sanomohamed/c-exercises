#include <iostream>
using namespace std;

int main()
{
	int size;
	cout<<"enter array size: ";
	cin>>size;
	cout<<endl;
	int num[size];
	cout<<"entering into the array... "<<endl;
	for(int i =0 ; i<size ; i++)
	{
		cout<<"enter the a number : ";
		cin>>num[i];
	}
	for(int i=0; i<size; i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}