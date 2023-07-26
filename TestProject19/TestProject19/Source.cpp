#include <iostream>
#include "Book.h"

using namespace std;

int main() {

	Book book1, book2;

	book1.setbookname("What man live by");
	book1.setbookwriter("Tolstoy");
	book1.setbookpage(120);

	book1.showdetails();
	cout << endl<<endl;

	cout << book1.getbookname() << endl << endl << book1.getbookwriter() << endl << endl << book1.getbookpage() << endl << endl;

		
		
	return 0;
}