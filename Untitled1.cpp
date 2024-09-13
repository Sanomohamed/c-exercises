#include <iostream>
using namespace std;

int main()
{
	int num[6];
	cout<<"entering element into the array....."<<endl;
	
	for(int i=0; i<6; i++){
			cout<<"enter a num: ";
			cin>>num[i];	
		}
		cout<<"element from the last to the first : "<<endl;
	for(int n=0; n<6; n++)
	{
		cout<<num[n]<<" ";
	}
		cout<<"\n\nelement from the last to the first : "<<endl;
	for(int n=5; n>=0; n--)
	{
		cout<<num[n]<<" ";
	}

	return 0;
}