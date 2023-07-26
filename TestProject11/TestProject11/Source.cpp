#include <iostream>


using namespace std;
int main() {

	int array[] = { 23 ,54,76,97 };

	for (int i = 0;i < 4;i++) {
		cout << array[i] << endl;
	}

	cout << endl << endl << endl << endl;
	int arr[2][4] = { {85,96,35,42},
					{74,85,12,36} };

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 4;j++) {
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}



	return 0;
}