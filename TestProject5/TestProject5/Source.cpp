#include <iostream>
#include <cmath>

using namespace std;
int main() {

	string password, truepassword = "951753";



	do {
		cout << "Please enter your password : ";
		cin >> password;
	} while (truepassword != password);

	cout << endl << endl << "Welcome!!!" << endl << endl;



	for (int i = 1;i <= 20;i++) {
		cout << i << endl;
	}
	cout << endl << endl << endl;

	for (int i = 1;i <= 20;i++) {
		if (i % 3 == 0) {
			cout << i << endl;
		}
	}
}