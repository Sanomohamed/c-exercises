#include <iostream>;
#include <iomanip>;
using namespace std;

int main()
{
	char x;
	do{
	
cout<<"1.pepsi              2.coke                   3.water"<<endl;
cout<<setw(10)<<"-------------------------------------------------------"<<endl;
cout<<setw(15)<<" "<<"Please enter your choice: "<<endl;
int num;
cin>>num;

if(num>3||num<=0){
	cout<<setw(15)<<"Invalid choice!"<<endl;
	cout<<setw(15)<<"Press Y to continue or N to end"<<endl;
	cin>>x;
}
  if(num==1){
  	cout<<"you chose Pepsi\n";
  	cout<<"Price: RM2.50"; 
  }	
  	cout<<setw(15)<<"Press Y to continue or N to end"<<endl;
	cin>>x;
   if(num==2){
  	cout<<"you chose coke\n";
  	cout<<"Price: RM2.60"; 
  		cout<<setw(15)<<"Press Y to continue or N to end"<<endl;
	cin>>x;
  }	
   if(num==3){
  	cout<<"you chose water\n";
  	cout<<"Price: RM1.50"; 
  	cout<<setw(15)<<"Press Y to continue or N to end"<<endl;
	cin>>x;
  }
}while(x!='n');
//Cout<<setw(15)<<" "<<"Thanks for comming see you soon";
  
return 0;
}