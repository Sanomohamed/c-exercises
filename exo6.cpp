#include <iostream>

using namespace std;

int main()

{   
    int num;
    int even=0, odd=0, zero=0;
	cout<<"enter 10 integer (positive , negative , or zero)"<<endl;
    cout<<endl;
    for(int i=0; i<10; i++)
	{
	   cin>>num;
    
    if(num%2==0)
	{
		even++;
	}
	else
	    odd++;
	if(num==0)
	{
		zero++;
	}
   }
	cout<<"the total number of even entered are " << even++ <<",which iclude "<< zero++ <<" zero "<<endl;
	cout<<"the total odd number entered is " << odd++ <<endl;
	return 0;
}