#include <iostream>

using namespace std;

int main() {

	float number[2][3];
	number[0][0] = 30;
	number[1][0] = 310;
	number[0][1] = 320;
	number[1][1] = 530;
	number[0][2] = 630;
	number[1][2] = 380;
	
	float n = 57;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 1; j++) {
			number[j][i] = n;
			n=(n + (10 - 20)) / 8;
		}
	}
	
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 1; j++) {
			cout << number[j][i] << endl;
		}
		
	}

	return 0;
}