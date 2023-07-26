#include <iostream>;
#include <cmath>;

using namespace std;
int main() {

	//First Way
	int number1;
	int number2 = 0;
	cout << "Please Enter a number : ";
	cin >> number1;

	while (number2<=number1) {
		cout << number2 << endl;
		number2 = number2 + 7;
	}
	//
	//Secound Way
	int index, vernum=1;

	cout << "Please Enter a number : ";
	cin >> index;
	while (vernum<=index)
	{
		if (vernum % 7 ==0)
		{
			cout << vernum << endl;
		}
		vernum++;
	}
	//
	return 0;
}