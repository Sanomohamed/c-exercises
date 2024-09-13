#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    double m,x,y,a,b,c;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<endl;
    a=sqrt(m);
    b=x*x;
    c=sqrt(m) + pow(x,y);
    cout<<"A= "<<setprecision(2)<<fixed<<a<<endl;
    cout<<"B= "<<setprecision(2)<<fixed<<b<<endl;
    cout<<"C= "<<setprecision(2)<<fixed<<c<<endl;
    return 0;
}