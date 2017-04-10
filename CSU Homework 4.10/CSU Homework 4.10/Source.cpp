#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double input = 0;
	double f = 0;
	double c = 0;
	double k = 0;
	char inp2;

	do {
		cout << "Now give us a unit. F, K, or C. Or, press 'q' to quit." << endl;
		cin >> inp2;

		if (inp2 == 'f') {
			cin >> input;
			f = input;
			c =  (f - 32)*5/9;
			k = 5 / 9 * (f - 32) + 273;
			cout << c << endl;
			cout << "Temp = " << fixed << setprecision(2) << c << "C." << endl;
			cout << "Temp = " << fixed << setprecision(2) << k << "K." << endl;
		}
		else if (inp2 == 'c') {
			cout << "Give a number between 0 and 100." << endl;
			cin >> input;
			c = input;
			f = (9 / 5) * c + 32;
			k = c + 273;
			cout << "Temp = " << f << "F." << endl;
			cout << "Temp = " << k << "K." << endl;
		}
		else if (inp2 == 'k') {
			cout << "Give a number between 273.15 and 373.15." << endl;
			cin >> input;
			k = input;
			f = (9 / 5) * (k - 273) + 32;
			c = k - 273.15;
			cout << "Temp = " << c << "C." << endl;
			cout << "Temp = " << f << "F." << endl;
		}
		else
			cout << "Invalid Input" << endl;
	} while (inp2 != 'q');
}
