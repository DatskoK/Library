#pragma once
#include "Book.h"
class NewBook : public Book
{
private:
	char category_type[50];
	char license;
public:
	void setcategory_type(char* category_type) { strcpy_s(this->category_type, category_type); }
	char* getcategory_type() { return category_type; }
	void setlicense(bool license) { this->license = license; }
	bool getlicense() { return license; }
	virtual void add_book();
	virtual void show_book();
};