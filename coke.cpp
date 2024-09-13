#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
  int choice;
  
  cout<< fixed << setprecision(2) << endl;
  
  cout<<setw(15)<<"1.pepsi"<<setw(15)<<" 2.coke "<<setw(15)<<"3.water "<<endl;
  cout<<endl;
  cout<<setw(15)<< "RM2.50" <<setw(15)<<"RM2.60"<<setw(15)<<"RM1.60"<<endl;
  cout<<endl;
  cout<<setw(40)<<"choice a drink"<<endl;
  cin>>setw(40)>>choice;
  cout<<endl;
  
   if (choice == 1)
{
   
  cout<<"pepsi"<<endl;
  cout<<"price: "<< "RM"<<2.50<<endl;
}
  else if (choice == 2)
{
  cout<<"coke"<<endl;
  cout<<"price: "<< "RM"<<2.60<<endl;
}
   else if (choice == 3)
{
   
  cout<<"water"<<endl;
  cout<<"price: "<< "RM"<<1.50<<endl;
}
else
cout<<"Invalid code "<<endl;
return 0;
  
}