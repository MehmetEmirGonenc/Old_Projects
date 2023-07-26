#include <iostream>

using namespace std;

int main() {

	int* p0 = new int;
	*p0 = 15;
	cout << p0 << endl<<*p0<<endl;
	delete p0;

	/* Doesn't work code block because we can't use the verible array like this!!
	int x;
	cout << "Please Enter a number for array : ";
	cin >> x;
	int arr[x];
	*/


	int x;
	cout << "Please Enter a number for array : ";
	cin >> x;
	int* p = new int[x-1];
	for (int i = 0;i < x;i++) {
		cin >> p[i];
	}
	int resault=0;
	for (int i = 0;i < x;i++) {
		resault = resault + p[i];
	}
	cout << endl << endl << resault << endl << endl;
}