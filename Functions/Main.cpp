#include <iostream>

using namespace std;

// char , int , float , string , double 

void draw(char shape,int x,int y=1) {
	switch (shape)
	{
	case'R':
		for (int j = 0; j < y; j++) {
			for (int i = 0; i < x; i++) {
				cout << "* ";
			}
			cout << endl;
		}
		break;
	case'T':
		for (int i = 1; i <= x; i++) {
			for (int j = 0; j < i; j++) {
				cout << "* ";
			}
			cout << endl;
		}
		break;
	case'C':
		for (int i = 0; i <= 2*x; i ++) {
			for (int j = 0; j <= 2*x - i; j++) {
				cout << " ";
			}
			i++;
			for (int m = i; m > 0; m--) {
				cout << "* ";
			}
			cout << endl;
		}
		for (int i = 2*x; i >= 0; i--) {
			for (int j = -2; j <= 2 * x - i; j++) {
				cout << " ";
			}
			i--;
			for (int m = i; m > 0; m--) {
				cout << "* ";
			}
			cout << endl;
		}
		break;
	default:
		cout << "Not aviable shape type!";
		break;
	}
}
//draw(R,4,3)
//
//		* * * *
//		* * * *
//		* * * *
// 
// draw(T,6)
// 
//		*
//		* *
//		* * *
//		* * * *
//		* * * * *
//		* * * * * *
// 
// draw(C,3)
// 
//	    *
//	  * * *
//	* * * * * 
//    * * *
//      *
//



int main() {
	char shape;
	int x, y = 1;
	cout << "Please enter your shape type , size : (C,r) / (T,x) / (R,x,y)\n";
	cin >> shape >> x >> y;
	draw(shape,x,y);
	
	
	return 0;
}