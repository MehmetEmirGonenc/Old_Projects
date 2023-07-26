#include <iostream>

using namespace std;

int main() {

	int number,number1=0;

	cout << "Please enter a number : ";
	cin >> number;

	for (int i = 1;i <= number;i++) {
		number1++;
		for (int l = 1;l <= i;l++) {
			cout << number1<<" ";
		}
		cout << endl;
	}

}