#include <iostream>

using namespace std;

float fonction(float n1,float n2) {
	float resault = (n1 + n2) * n1 / n2;
	return resault;
}

void write() {
	cout << "This is test writing" << endl;
	cout << "This is test writing" << endl;
	cout << "This is test writing" << endl;
	cout << "This is test writing" << endl;
	cout << "This is test writing" << endl;
	cout << "This is test writing" << endl;
}

void birth(int date) {
	int resault = 2022 - date;
	cout << resault<<endl;
}

int main() {
	int number1, number2;
	cout << "Please Neter two number : ";
	cin >> number1 >> number2;
	float resault = fonction(number1, number2);
	cout << resault;

	write();
	birth(1978);
}