#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>
#include <conio.h>
#pragma warning (disable:4996)

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13

using namespace std;

//declare main four function
void addFraction();
void subtractFraction();
void multiplyFraction();
void divideFraction();

//declare validation
bool checkNumber(string str);
int checkValidNume(string statement);
int checkValidDeno(string statement);

//declare menu and other function
void menu();
int findGCD(int num1, int num2);
char goBackMenu(string statement);

int main() {
	menu();
	return 0;
}

//main four function
void addFraction() {
	int firstNume = 0, firstDeno = 0, secondNume = 0, secondDeno = 0;
	int resultNume = 0, resultDeno = 0;
	int count = 0;

	while (count != 6) {
		system("cls");
		count++;
		cout << "\t\t\t\t\t+---------------------------------+\n";
		cout << "\t\t\t\t\t|          Add Fraction           |\n";
		cout << "\t\t\t\t\t+---------------------------------+\n\n";
		cout << "\t\t\t\t\t" << setw(10) << firstNume << setw(10) << secondNume << setw(10) << resultNume << endl;
		cout << "\t\t\t\t\t" << setw(11) << "---" << setw(4) << "+" << setw(6) << "---" << setw(4) << "=" << setw(6) << "---" << endl;
		cout << "\t\t\t\t\t" << setw(10) << firstDeno << setw(10) << secondDeno << setw(10) << resultDeno << "\n\n";
		if (count == 1)
			firstNume = checkValidNume("\t\t\t\tEnter numerator of first number : ");
		if (count == 2)
			firstDeno = checkValidDeno("\t\t\t\tEnter denominator of first number : ");
		if (count == 3)
			secondNume = checkValidNume("\t\t\t\tEnter numerator of second number : ");
		if (count == 4)
			secondDeno = checkValidDeno("\t\t\t\tEnter denominator of second number : ");
		if (count == 5) {
			//finding Least Common Multiple of the denominators
			int lcm = (firstDeno * secondDeno) / findGCD(firstDeno, secondDeno);
			int sum = (firstNume * (lcm / firstDeno)) + (secondNume * (lcm / secondDeno));
			resultNume = sum / findGCD(sum, lcm);
			resultDeno = lcm / findGCD(sum, lcm);
		}
	}
	
	char choice = goBackMenu("\t\t\t\tGo back to main menu or exit program? \n\t\t\t\t(Y = go back to main menu, N = exit program) : ");
	if (choice == 'N') {
		exit(-1);
	}
	system("cls");
}
void subtractFraction() {
	string sign = "";
	int firstNume = 0, firstDeno = 0, secondNume = 0, secondDeno = 0;
	int resultNume = 0, resultDeno = 0;
	int count = 0;

	while (count != 6) {
		system("cls");
		count++;
		cout << "\t\t\t\t\t+---------------------------------+\n";
		cout << "\t\t\t\t\t|          Subtract Fraction      |\n";
		cout << "\t\t\t\t\t+---------------------------------+\n\n";
		cout << "\t\t\t\t\t" << setw(10) << firstNume << setw(10) << secondNume << setw(10) << resultNume << endl;
		cout << "\t\t\t\t\t" << setw(11) << "---" << setw(4) << "-" << setw(6) << "---" << setw(4) << "=  " << sign << setw(5) << "---" << endl;
		cout << "\t\t\t\t\t" << setw(10) << firstDeno << setw(10) << secondDeno << setw(10) << resultDeno << "\n\n";
		if (count == 1)
			firstNume = checkValidNume("\t\t\t\tEnter numerator of first number : ");
		if (count == 2)
			firstDeno = checkValidDeno("\t\t\t\tEnter denominator of first number : ");
		if (count == 3)
			secondNume = checkValidNume("\t\t\t\tEnter numerator of second number : ");
		if (count == 4)
			secondDeno = checkValidDeno("\t\t\t\tEnter denominator of second number : ");
		if (count == 5) {
			//finding Least Common Multiple of the denominators
			double firstFraction = (double)firstNume / (double)firstDeno;
			double secondFraction = (double)secondNume / (double)secondDeno;
			if (firstFraction > secondFraction) {
				sign = "";
				int lcm = (firstDeno * secondDeno) / findGCD(firstDeno, secondDeno);
				int sum = (firstNume * (lcm / firstDeno)) - (secondNume * (lcm / secondDeno));
				resultNume = sum / findGCD(sum, lcm);
				resultDeno = lcm / findGCD(sum, lcm);
			}
			else {
				sign = "-";
				int lcm = (firstDeno * secondDeno) / findGCD(firstDeno, secondDeno);
				int sum = (secondNume * (lcm / secondDeno)) - (firstNume * (lcm / firstDeno));
				resultNume = sum / findGCD(sum, lcm);
				resultDeno = lcm / findGCD(sum, lcm);
			}
		}
	}
	char choice = goBackMenu("\t\t\t\tGo back to main menu or exit program? \n\t\t\t\t(Y = go back to main menu, N = exit program) : ");
	if (choice == 'N') {
		exit(-1);
	}
	system("cls");
}
void multiplyFraction() {
	int firstNume = 0, firstDeno = 0, secondNume = 0, secondDeno = 0;
	int resultNume = 0, resultDeno = 0;
	int count = 0;
	
	while (count != 6) {
		system("cls");
		count++;
		cout << "\t\t\t\t\t+---------------------------------+\n";
		cout << "\t\t\t\t\t|          Multiply Fraction      |\n";
		cout << "\t\t\t\t\t+---------------------------------+\n\n";
		cout << "\t\t\t\t\t" << setw(10) << firstNume << setw(10) << secondNume << setw(10) << resultNume << endl;
		cout << "\t\t\t\t\t" << setw(11) << "---" << setw(4) << "x" << setw(6) << "---" << setw(4) << "=" << setw(6) << "---" << endl;
		cout << "\t\t\t\t\t" << setw(10) << firstDeno << setw(10) << secondDeno << setw(10) << resultDeno << "\n\n";
		if (count == 1)
			firstNume = checkValidNume("\t\t\t\tEnter numerator of first number : ");
		if (count == 2)
			firstDeno = checkValidDeno("\t\t\t\tEnter denominator of first number : ");
		if (count == 3)
			secondNume = checkValidNume("\t\t\t\tEnter numerator of second number : ");
		if (count == 4)
			secondDeno = checkValidDeno("\t\t\t\tEnter denominator of second number : ");
		if (count == 5) {
			//finding Least Common Multiple of the denominators
			int lcm = (firstDeno * secondDeno) / findGCD(firstDeno, secondDeno);
			int sum = (firstNume * (lcm / firstDeno)) + (secondNume * (lcm / secondDeno));
			int multiplySum = (firstNume * (lcm / firstDeno)) * (secondNume * (lcm / secondDeno));
			resultNume = multiplySum / findGCD(multiplySum, lcm);
			resultDeno = lcm / findGCD(sum, lcm);
		}
	}
	char choice = goBackMenu("\t\t\t\tGo back to main menu or exit program? \n\t\t\t\t(Y = go back to main menu, N = exit program) : ");
	if (choice == 'N') {
		exit(-1);
	}
	system("cls");
}
void divideFraction() {
	int firstNume = 0, firstDeno = 0, secondNume = 0, secondDeno = 0;
	int resultNume = 0, resultDeno = 0;
	int count = 0;

	while (count != 6) {
		system("cls");
		count++;
		cout << "\t\t\t\t\t+---------------------------------+\n";
		cout << "\t\t\t\t\t|          Divide Fraction        |\n";
		cout << "\t\t\t\t\t+---------------------------------+\n\n";
		cout << "\t\t\t\t\t" << setw(10) << firstNume << setw(10) << secondNume << setw(10) << resultNume << endl;
		cout << "\t\t\t\t\t" << setw(11) << "---" << setw(4) << "/" << setw(6) << "---" << setw(4) << "=" << setw(6) << "---" << endl;
		cout << "\t\t\t\t\t" << setw(10) << firstDeno << setw(10) << secondDeno << setw(10) << resultDeno << "\n\n";
		if (count == 1)
			firstNume = checkValidNume("\t\t\t\tEnter numerator of first number : ");
		if (count == 2)
			firstDeno = checkValidDeno("\t\t\t\tEnter denominator of first number : ");
		if (count == 3)
			secondNume = checkValidNume("\t\t\t\tEnter numerator of second number : ");
		if (count == 4)
			secondDeno = checkValidDeno("\t\t\t\tEnter denominator of second number : ");
		if (count == 5) {
			//finding Least Common Multiple of the denominators
			int temp = secondNume;
			secondNume = secondDeno;
			secondDeno = temp;

			int lcm = (firstDeno * secondDeno) / findGCD(firstDeno, secondDeno);
			int sum = (firstNume * (lcm / firstDeno)) + (secondNume * (lcm / secondDeno));
			int multiplySum = (firstNume * (lcm / firstDeno)) * (secondNume * (lcm / secondDeno));
			resultNume = (multiplySum / findGCD(multiplySum, lcm)) / 2;
			resultDeno = (lcm / findGCD(sum, lcm)) / 2;

			temp = secondNume;
			secondNume = secondDeno;
			secondDeno = temp;
		}
	}
	char choice = goBackMenu("\t\t\t\tGo back to main menu or exit program? \n\t\t\t\t(Y = go back to main menu, N = exit program) : ");
	if (choice == 'N') {
		exit(-1);
	}
	system("cls");
}

//validation
bool checkNumber(string str) {
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}
int checkValidNume(string statement) {
	string str;
	while (1) {
		cout << statement;
		cin >> str;

		if (!checkNumber(str)) {
			cout << "\t\t\t\tInvalid input. Please enter a integer number." << endl;
		}
		else {
			int num = stoi(str);
			return num;
		}
	}
}
int checkValidDeno(string statement) {
	string str;
	while (1) {
		cout << statement;
		cin >> str;

		if (!checkNumber(str)) {
			cout << "\t\t\t\tInvalid input. Please enter a integer number." << endl;
		}
		else {
			int num = stoi(str);
			if (num == 0) {
				cout << "\t\t\t\tInvalid input. Denominator cannot be 0." << endl;
			}
			else {
				return num;
			}
		}
	}
}

//menu and other function
void menu() {
	cout << "\t\t\t\t\t+---------------------------------+\n";
	cout << "\t\t\t\t\t|      Numerator                  |\n";
	cout << "\t\t\t\t\t|         AND       Calculator    |\n";
	cout << "\t\t\t\t\t|     Denominator                 |\n";
	cout << "\t\t\t\t\t+---------------------------------+\n";
	cout << "\t\t\t\t\t| --> 1. Add Fraction             |\n";
	cout << "\t\t\t\t\t| 2. Subtract Fraction            |\n";
	cout << "\t\t\t\t\t| 3. Multiply Fraction            |\n";
	cout << "\t\t\t\t\t| 4. Divide Fraction              |\n";
	cout << "\t\t\t\t\t| 5. Exit                         |\n";
	cout << "\t\t\t\t\t+---------------------------------+\n";
	cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
	int selection = 0, count = 1;
	while (1) {
		switch ((selection = getch())) {
		case KEY_UP:
			count--;
			break;
		case KEY_DOWN:
			count++;
			break;
		case KEY_ENTER:
			switch (count) {
			case 1:addFraction();      break;
			case 2:subtractFraction(); break;
			case 3:multiplyFraction(); break;
			case 4:divideFraction();   break;
			case 5:exit(-1);           break;
			}
			break;
		}
		if (count == 6) {
			count = 1;
		}
		if (count == 0) {
			count = 5;
		}

		if (count == 1) {
			system("cls");
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t|      Numerator                  |\n";
			cout << "\t\t\t\t\t|         AND       Calculator    |\n";
			cout << "\t\t\t\t\t|     Denominator                 |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t| --> 1. Add Fraction             |\n";
			cout << "\t\t\t\t\t| 2. Subtract Fraction            |\n";
			cout << "\t\t\t\t\t| 3. Multiply Fraction            |\n";
			cout << "\t\t\t\t\t| 4. Divide Fraction              |\n";
			cout << "\t\t\t\t\t| 5. Exit                         |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
		}
		if (count == 2) {
			system("cls");
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t|      Numerator                  |\n";
			cout << "\t\t\t\t\t|         AND       Calculator    |\n";
			cout << "\t\t\t\t\t|     Denominator                 |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t| 1. Add Fraction                 |\n";
			cout << "\t\t\t\t\t| --> 2. Subtract Fraction        |\n";
			cout << "\t\t\t\t\t| 3. Multiply Fraction            |\n";
			cout << "\t\t\t\t\t| 4. Divide Fraction              |\n";
			cout << "\t\t\t\t\t| 5. Exit                         |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
		}
		if (count == 3) {
			system("cls");
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t|      Numerator                  |\n";
			cout << "\t\t\t\t\t|         AND       Calculator    |\n";
			cout << "\t\t\t\t\t|     Denominator                 |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t| 1. Add Fraction                 |\n";
			cout << "\t\t\t\t\t| 2. Subtract Fraction            |\n";
			cout << "\t\t\t\t\t| --> 3. Multiply Fraction        |\n";
			cout << "\t\t\t\t\t| 4. Divide Fraction              |\n";
			cout << "\t\t\t\t\t| 5. Exit                         |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
		}
		if (count == 4) {
			system("cls");
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t|      Numerator                  |\n";
			cout << "\t\t\t\t\t|         AND       Calculator    |\n";
			cout << "\t\t\t\t\t|     Denominator                 |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t| 1. Add Fraction                 |\n";
			cout << "\t\t\t\t\t| 2. Subtract Fraction            |\n";
			cout << "\t\t\t\t\t| 3. Multiply Fraction            |\n";
			cout << "\t\t\t\t\t| --> 4. Divide Fraction          |\n";
			cout << "\t\t\t\t\t| 5. Exit                         |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
		}
		if (count == 5) {
			system("cls");
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t|      Numerator                  |\n";
			cout << "\t\t\t\t\t|         AND       Calculator    |\n";
			cout << "\t\t\t\t\t|     Denominator                 |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\t\t\t\t\t| 1. Add Fraction                 |\n";
			cout << "\t\t\t\t\t| 2. Subtract Fraction            |\n";
			cout << "\t\t\t\t\t| 3. Multiply Fraction            |\n";
			cout << "\t\t\t\t\t| 4. Divide Fraction              |\n";
			cout << "\t\t\t\t\t| --> 5. Exit                     |\n";
			cout << "\t\t\t\t\t+---------------------------------+\n";
			cout << "\n\t\t\t\tPress Up/Down Arrow to move and Enter to select\n";
		}
	}
}
int findGCD(int num1, int num2) {
	//GCD = Greatest common divisors
	int gcd = 0;

	for (int i = 1; i <= num1 && i <= num2; ++i){
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}
	return gcd;
}
char goBackMenu(string statement) {
	char choice;
	cout << statement;
	cin >> choice;
	choice = toupper(choice);
	while (choice != 'Y' && choice != 'N') {
		cout << "\t\t\t\tInvalid input. Please enter y = Yes or n = No: ";
		cin >> choice;
	}
	return choice;
}