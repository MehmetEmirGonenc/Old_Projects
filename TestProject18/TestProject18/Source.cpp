#include <iostream>
#include "CarH.h"

using namespace std;

int main() {

	/* Without constructer describing:
	Car car1, car2;

	car1.model = "SuperB";
	car1.color = "Black";
	car1.price = 90899;
	
	car2.model = "Karoq";
	car2.color = "Grey";
	car2.price = 109899;

	car1.ShowDetails();
	cout << endl << endl;
	car2.ShowDetails();
	*/

	//With constructer describing:
	Car car1("White", "Opel", 20000);
	Car car2("Black", "Audi", 35000);

	car1.ShowDetails();
	cout << endl << endl;
	car2.ShowDetails();

}