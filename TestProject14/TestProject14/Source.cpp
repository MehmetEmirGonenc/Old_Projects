#include <iostream>

using namespace std;

void fonk(int x_) {
	x_ = x_ + 5 * 52;
	cout << "Fonk Resault : " << x_<<endl;
}
void fonk2(int& x_) {
	x_ = x_ + 5 * 52;
	cout << "Fonk Resault : " << x_ << endl;

}

int main() {
	int arr[] = {65, 34, 12};
	int* ptr;
	ptr = arr;

	cout << arr << endl << ptr << endl<<endl;

	cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << endl;

	cout << *ptr << endl << *(ptr + 1) << endl << *(ptr + 2) << endl<<endl;

	cout << ptr[0] << endl << ptr[1] << endl << ptr[2] << endl;

	

	int x = 10;
	fonk(x);
	cout << "Main Resault First : " << x << endl;
	fonk2(x);
	cout << "Main Resault : " << x << endl;



	return 0;
}