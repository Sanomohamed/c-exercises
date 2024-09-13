#include <iostream>

using namespace std;

int main()

{
//Declare Variables
//Ask user for their birth year

cout << "Please enter your birth year: ";
int year;
cin >> year;

//Calculate user's zodiac and write program to display the proper sign

switch ((year - 1936) % 12)
{
default:(year > 1936 || year < 2055);
cout << "you entered an invalid year, please try again!" << endl;
break;

case 0:
cout << "Your chinese zodiac sign is the rat! " << endl;
break;

case 1:
cout << "Your chinese zodiac sign is the ox! " << endl;
break;

case 2:
cout << "Your chinese zodiac sign is the tiger! " << endl;
break;

case 3:
cout << "Your chinese zodiac sign is the rabbit! " << endl;
break;

case 4:
cout << "Your chinese zodiac sign is the dragon! " << endl;
break;

case 5:
cout << "Your chinese zodiac sign is the snake! " << endl;
break;

case 6:
cout << "Your chinese zodiac sign is the horse! " << endl;
break;

case 7:
cout << "Your chinese zodiac sign is the goat! " << endl;
break;

case 8:
cout << "Your chinese zodiac sign is the monkey! " << endl;
break;

case 9:
cout << "Your chinese zodiac sign is the rooster! " << endl;
break;

case 10:
cout << "Your chinese zodiac sign is the dog! " << endl;
break;

case 11:
cout << "Your chinese zodiac sign is the pig! " << endl;
break;


}

system("pause");
return 0;
}