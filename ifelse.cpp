#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	double score;
	cout<<"Enter your score ";
	cin>> score;
	cout<< endl;
	
	if (score>=90.0)
	cout<< " grade is A";
	else if (score>=80.0)
	cout<< " grade is b";
	else if (score>=70.0)
	cout<< " grade is c";
	return 0;
}