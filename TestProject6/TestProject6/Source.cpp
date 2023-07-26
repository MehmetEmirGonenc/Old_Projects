#include <iostream>

using namespace std;

int main() {

	int number,resault =1;
	cout << "Please Enter a number : ";
	cin >> number;

	for (int i = 1;i <= number;i++) {
		resault = resault * i;
	}
	cout << resault << endl;

	int number1, resault1 =1;

	cout << "Please Enter a number : ";
	cin >> number1;

	for (int i = number1;i <= number1, i > 0;i--) {
		resault1 = resault1 * i;
	}
	cout << resault1 << endl;
}