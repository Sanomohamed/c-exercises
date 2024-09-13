#include <iostream>
using namespace std;
int main()
{
int a=5, b=6, c=0;
int num= a+5*b++;
c-=num+b--;
a+=30/b;
cout << a <<" , "<< b <<","<< c << endl;
cout<< num << endl;
}