#include <iomanip>
using namespace std;
int main()
{
      string name1, name2;
      
      
      cout <<"please enter your name: " ;
      getline(cin,name1);
      cout <<"please enter your name: " ;
      getline(cin,name2);
    cout << setw(20) << "----------" ;
    cout << setw(20) << "----------" ;
      
      
      cout << setw(20) << name1 << endl << endl;
      cout << setw(20) << name2 << endl << endl;
      return 0;
    
}
