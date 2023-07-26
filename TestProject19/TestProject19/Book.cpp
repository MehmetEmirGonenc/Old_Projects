#include "Book.h"

void Book::showdetails() {
	cout << "Name : " << Book::name << endl;
	cout << "Writer : " << Book::Writer << endl;
	cout << "Page : " << Book::page << endl;
}
void Book::setbookname(string _name) {
	name = _name;
}
void Book::setbookwriter(string _writer) {
	Writer = _writer;
}
void Book::setbookpage(int _page) {
	page = _page;
}
string Book::getbookname() {
	return name;
}
string Book::getbookwriter() {
	return Writer;
}
int Book::getbookpage() {
	return page;
}