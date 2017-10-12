/* Kevin Ward, Ian Williams, Abhi Patel - Period 2
Period Problem 3
Three Digit Ascending and Descending Selection
*/

#include <iostream>
#include <conio.h>
#include <Windows.h>


using namespace std;


void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}


void main() {
	int three_digit_number; //assigned variables

for (int i = 0; i < 30; i++) {
	cout << "Enter a three digit number, ";
	Sleep(2000);
	cout << "please. : ";
	cin >> three_digit_number; 


	int x = three_digit_number;
	int A = x / 100;
	int B = (x / 10) % 10;
	int C = x % 10;
//three digits are seperated using integer division

	if (A < B && B < C) {
		cout <<x<< " is Ascending" << endl;
		Sleep(2000);
	}
	else if (A > B && B > C) {
		cout << "Descending..." << endl;
		Sleep(2000);
	}
	else {
		cout << "Neither..." << endl;
		Sleep(2000);
	}
}
	
//outputs if the number is ascending, descending, or neither
	pause();
}
