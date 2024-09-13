#include <iostream>

using namespace std;

int main()

{   
int array[5];
	int zero,even,odd;
	cout<<"enter 5 integer: ";
for(int i=0;i<5;i++){
	int num;
	cin>>num;
 	odd++;

	if(num==0){
		zero++;
	}
	else if(num%2==0){
		even++;
	}	
}
cout<<"you have: "<<even<<" even and: "<<zero<<" zeros, "<< odd<<" odds"<<endl; 
  return 0;
}
