#include <iostream>
#include "Book.h"

using namespace std;

int main() {


	Book book1("Think and Be Rich", "Napolion Hill", 150, 51.85);
	Book book2("A Berief History Of Time", "Stephan Howking", 950, 351.85);
	Book* p = new Book("On the Origin of Species", "Charles Darwin", 502, 562);

	cout << "Welcome To Library System!"<<endl<<"Please Choice One Of The Option : \n";
	cout << "1 - See All Books\n";
	cout << "2 - Get Info About One Bookn\n";

	int choice;
	cin >> choice;

	switch (choice)
	{
	case(1):
		book1.BookInfo();
		book2.BookInfo();
		cout << "\n\n\n\n";

		p->BookInfo();
		break;
	default:
		cout << "Please enter meaninful number!\n";
		break;
	}




	
	
	delete p;

	return 0;
}