#include <iostream>
using namespace std;
int main()
{
	int search;
	bool found=false;
	int array[3]={1,3,10};
	char x;
	do{
	
	cout<<"what number are you searching for?: ";
	cin>>search;
	
	for(int i=0;i<3;i++){
	
	     if(search==array[i]){
	     	cout<<"\nThe number is found at index: "<<array[i];
		 }
	cout<<"\n\ndo you want to continue y for yes and n for no: ";
	cin>>x;
	
	}
	if(found==false)
	cout<<"Number not found in array!! \n";	
	cout<<"\ndo you want to continue y for and n for no: ";
	cin>>x;
   }while(x != 'n');
	return 0;
}