#include "Book.h"

//Book Constructer
Book::Book(string _NameOfbook, string _AuthorOfBook, int _PageOfBook, float _PriceOfBook) {
	NameOfBook = _NameOfbook;
	AuthorOfBook = _AuthorOfBook;
	PageOfBook = _PageOfBook;
	PriceOfBook = _PriceOfBook;
}
//Book Destructer
Book::~Book() {
	cout << Book::NameOfBook<< " : Destructor Called\n";
	
}

void Book::BookInfo()
{
	int number;

	cout << "Book Name : " << Book::NameOfBook << endl;
	cout << "Book Author : " << Book::AuthorOfBook << endl;
	cout << "Book Page : " << Book::PageOfBook << endl;
	cout << "Book Price : " << Book::PriceOfBook << endl<<endl;

	

}
void Book::GetInfo(int info)
{
	cout << "0 - Book Name\n";
	cout << "1 - Book Author\n";
	cout << "2 - Book Page\n";
	cout << "3 - Book Price\n";
	cout << "Choice One Of The Number : ";

	cin >> info;
	switch (info)
	{
	case(0):
		cout << "Book Name : " << Book::NameOfBook << endl;
		break;
	case(1):
		cout << "Book Author : " << Book::AuthorOfBook << endl;
		break;
	case(2):
		cout << "Book Page : " << Book::PageOfBook << endl;
		break;
	case(3):
		cout << "Book Price : " << Book::PriceOfBook << endl;
		break;
	default:
		cout << "Please choice a meanful number!!";
		break;
	}

}