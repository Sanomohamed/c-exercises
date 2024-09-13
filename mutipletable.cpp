#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout<<" " << setw(35) << "Multiplication table" << endl <<endl;
    
    cout<< " ";
    for(int h = 1; h <= 9; h++)
        cout<< setw(5) <<h;
    
    cout<<"\n-----------------------------------------------\n";
	
	for (int i = 1; i <= 9 ;i++)
    {
    	cout<< i << "|";
    	
    	for(int j = 1;j <= 9; j++)
    	{
    		cout<< setw(5) << i * j;
    	}
		
    	cout<<endl;
	}
	
	return 0;
}
