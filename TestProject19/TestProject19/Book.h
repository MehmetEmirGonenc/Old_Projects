#pragma once
#include <iostream>

using namespace std;


class Book {
public:
	
	void showdetails();
	//Setting
	void setbookname(string _name);
	void setbookwriter(string _writer);
	void setbookpage(int page);
	//Getting 
	string getbookname();
	string getbookwriter();
	int getbookpage();
private:
	string name;
	string Writer;
	int page;
};