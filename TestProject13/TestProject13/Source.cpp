#include <iostream>

using namespace std;

int calc(int n1) {

	return n1 = (n1 / 1000 * 85692 - 52365 + 8456185) / 7 * 11;

}



int main() {
	int number =11;
	int *ptr;
	ptr = &number;
	cout << ptr << endl<< *ptr <<endl;
	*ptr = calc(*ptr);

	cout << *ptr << endl;

}