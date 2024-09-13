#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double h1,h2,r1,r2,v1,v2;
	
	cout<<"Please enter the radius of the cone (cm): ";
	cin>>r1;
	cout<<"Please enter the hight of the cone (cm): ";
	cin>> h1;
	cout<<endl<<endl;
	cout<<"Please enter the radius of the cylinder (cm): ";
	cin>>r2;
	cout<<"Please enter the hight of the cone (cm): ";
	cin>>h2;
	cout<<endl<<endl;
	
	
	
	cout<<fixed<<setprecision(2);
	cout<<"The volum of the cone is: "<<v1<<"cm3"<<endl;
	cout<<"The volum of the cylinder is: "<<v2<<"cm3"<<endl;
}