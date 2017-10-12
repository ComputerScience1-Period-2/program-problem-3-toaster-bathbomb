/* Kevin Ward, Ian Williams, Abhi Patel - Period 2
Period Problem 3
Three Digit Ascending and Descending Selection
*/

#include <iostream>
#include <conio.h>



using namespace std;


void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}


void main() {
	int three_digit_number;

	cout << "Enter a three digit number, ";
	cout << "please. : ";
	cin >> three_digit_number;


	//don't try to change the variable name, it could confuse you later on; stick to the specific variable name you've already given
	int A = three_digit_number / 100;
	int B = (three_digit_number / 10) % 10;
	int C = three_digit_number % 10;


	if (A < B && B < C) {
		cout << "Ascending..." << endl;
	}
	else if (A > B && B > C) {
		cout << "Descending..." << endl;
	}
	else {
		cout << "Neither..." << endl;
	}
	
	for (int i = 1; i < 30; i++) {
		cout << "Enter a three digit number, ";
	cout << "please. : ";
	cin >> three_digit_number;

	int A = three_digit_number / 100;
	int B = (three_digit_number / 10) % 10;
	int C = three_digit_number % 10;
		
		if (A < B && B < C) {
		cout << "Ascending..." << endl;
	}
	else if (A > B && B > C) {
		cout << "Descending..." << endl;
	}
	else {
		cout << "Neither..." << endl;
	}
	}
		

	pause();
}
