#include <iostream>

using namespace std;

void fonc() {
	cout << "Test Message" << endl;

}
void fonc(string msg) {
	cout <<msg  << endl;
}
void fonc(int n1) {
	cout << n1 << endl;
}


int main() {
	fonc();
	fonc("Another Message");
	fonc(65);


	return 0;
}