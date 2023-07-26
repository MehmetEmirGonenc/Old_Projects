#include <iostream>

using namespace std;

int main() {

	int number;
	cout << "Please Enter a number(1-5) : ";
	cin >> number;

	switch (number)
	{
		case(1):
			cout << "One this is best one" << endl;
			break;
		case(2):
			cout << "Wooow two Ha" << endl;
			break;
		case(3):
			cout << "Haha the tree or the three" << endl;
			break;
		case(4):
			cout << "For or Four" << endl;
			break;
		case(5):
			cout << "Five or Fire" << endl;
			break;


		default:
			cout << "Please Select a number between of 1-5" << endl;
			break;
	}

}