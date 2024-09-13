#include <iostream>;
#include <iomanip>;

using namespace std;

int main()

{
	//declation variable
	double price1=12.50;
	double price2=25.55;
	int ticket1, ticket2;
	double total;
	
	//command number of digit after the double
	cout<< fixed << setprecision(2);
	
	cout<<setw(60)<<"WELCOME TO TGV MOVIE"<< endl;
	cout<<endl;
	//output desing
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<<setw(35)<< setfill(' ')  << "MOVIE" << setw(40) << " price "<<endl;
	cout<<setw(35) <<"-----------"<< setw(40) <<"------------"<< endl;
	cout<<setw(35)<< "love "<< setw(35) << price1 <<endl;
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<< endl;
		
	//output design	
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<<setw(60)<<setfill(' ') <<"MOVIE" << setw(40)<< " price "<<endl;
	cout<<setw(60)<<"---------"<< setw(40) <<"------------"<< endl;
	cout<<setw(60) <<"World "<< setw(35) << price2 <<endl;
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<< endl;
	
	//command prompt for user to enter information
	cout<< "How many ticket Movie love? "<<endl;
	cin>> ticket1;
	cin.ignore();
	
	// command prompt for user to enter information
	cout<<"How many ticket Movie World? "<< endl;
	cin>> ticket2;
	cin.ignore();
	cout<< endl;
	
	//process
	total= (ticket1*price1)+(ticket2*price2);
	
	//output design for user to check the informartion
	
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<< "love ticket number " << setw(40) << setfill(' ') << "price per unit "<< setw(40) << setfill(' ')<< "total price "<<endl;
	cout<<"------------------"<< setw(40) <<"---------------------"<< setw(40) <<"-------------------"<< endl;
	cout<< ticket1 << setw(50) << "RM12.50" << setw(40) << price1*ticket1 << endl;
	cout<< endl;
	
	//output design for user to check the informartion
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<< "World ticket number " << setw(40) << setfill(' ') << "price per unit "<< setw(40) << setfill(' ')<< "total price "<<endl;
	cout<<"-------------------"<< setw(40) <<"-------------------"<< setw(40) <<"--------------------"<< endl;
	cout<< ticket2 << setw(50) << "RM25.55" << setw(40) << price2*ticket2 << endl;
    cout<< endl;
  
	//output of the result
	cout<<setw(50)<<setfill(' ')<< "total "<<endl;
	cout<< setw(50)<<"--------"<<endl;
	cout<< setw(45)<< setfill(' ')<<"RM"<< total <<endl;
	cout<<endl;
	cout<< setw(118)<< setfill('*')<< "*"<< endl;
	cout<<endl;
	
	
	
	
	return 0;
	
}