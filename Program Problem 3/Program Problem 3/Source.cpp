+/* Kevin Ward, Ian Williams, Abhi Patel - Period 2
 +Period Problem 3
 +Three Digit Ascending and Descending Selection
 +*/
 +
 +#include <iostream>
 +#include <conio.h>
 +#include <Windows.h>
 +
 +
 +using namespace std;
 +
 +
 +void pause() {
 +	cout << "Press any key to continue...";
 +	while (!_kbhit());
 +	_getch();
 +	cout << '\n';
 +}
 +
 +
 +void main() {
 +	int three_digit_number;
 +
 +
 +	cout << "Enter a three digit number, ";
 +	Sleep(2000);
 +	cout << "please. : ";
 +	cin >> three_digit_number;
 +
 +
 +	int x = three_digit_number;
 +	int A = x / 100;
 +	int B = (x / 10) % 10;
 +	int C = x % 10;
 +
 +
 +	if (A < B && B < C) {
 +		cout << "Ascending..." << endl;
 +		Sleep(2000);
 +	}
 +	else if (A > B && B > C) {
 +		cout << "Descending..." << endl;
 +		Sleep(2000);
 +	}
 +	else {
 +		cout << "Neither..." << endl;
 +		Sleep(2000);
 +	}
 +
 +	pause();
 +} 
