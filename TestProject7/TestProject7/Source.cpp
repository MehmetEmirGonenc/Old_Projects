#include <iostream>

using namespace std;
int main() {
	int number;
	cout << "Please enter a number : ";
	cin >> number;

	for (int i = number;i <= number && i >= 0;i--) {
		if (i == 10) {
			break;
		}
		cout << i << endl;
	}
	int number1;
	cout << "Please enter a number : ";
	cin >> number1;

	for (int i = 1;i <= number1;i++) {
		if (i == 15) {
			continue;
		}
		cout << i << endl;
	}
}