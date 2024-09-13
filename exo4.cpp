#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a,b,c,d,i,ii,iii,iv;
	//output
	cout<<"Enter the value of a, b, c, and d (integer value) : ";
	cin>>a;
	cin.ignore();
	cin>>b;
	cin>>c;
	cin>>d;
	cout<<endl;
	i = ((d*d)-c)+a)*a*b+*a-pow(2,2)/d*c;
	ii = d/c*a*c+c-d*(5+8*(a*b));
	iii = (a*b*c*c+d-a)+(pow(a*b*c,3)+c-(d*a*d))+a-b-pow(c,c);
	iv = b/c*c*d+(a*b)-d+(a+c*(a*b))*a*d;
	cout<<"i = " << i <<endl;
	cout<<"ii = " << ii<<endl ;
	cout<<"iii = " << iii<<endl ;
	cout<<"iv = " << iv <<endl; 
	
	
	return 0;
}