#include <iostream>
#include <cmath>
 
using namespace std;
int main() {

	int n1, n2, n3,rsa;
	cout << "Plese Enter 3 Number:";
	cin >> n1 >> n2 >> n3;

	if (n1 >= n2 && n1 >= n3) {
		rsa = n1;
	}
	else if (n2 >= n1 && n2 >= n3) {
		rsa = n2;
	}
	else {
		rsa = n3;
	}

	cout << "The Biggest One : " << rsa << endl;

}