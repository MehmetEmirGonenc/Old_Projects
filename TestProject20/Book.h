#pragma once

#include <iostream>

using namespace std;

class Book {
public:
	//Constructer
	Book(string _NameOfbook, string _AuthorOfBook, int _PageOfBook, float _PriceOfBook);
	//Destrcter
	~Book();
	void BookInfo();
	void GetInfo(int info);
	
private:
	string NameOfBook;
	string AuthorOfBook;
	int PageOfBook;
	float PriceOfBook;

};