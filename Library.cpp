#include "Library.h"
#include "Book.h"
using namespace std;
void Library::add_books(Book books[], int n)
{
	for (int i = 0; i < n; i++)
		books[i].add_book();
}
void Library::show_books(Book books[], int n) {
	for (int i = 0; i < n; i++)
		books[i].show_book();
}
void Library::fileWrite(char* txt, Book books[], int n)
{
	ofstream t(txt, ios::binary | ios::app);
	for (int i = 0; i < n; i++) {
		t.write((char*)&books[i], sizeof books[i]);
	}
	t.close();
}
int Library::fileOfSize(char* txt)
{
	ifstream t(txt, ios::binary);
	if (!t.is_open()) {
		cout << "‘айл не може бути в≥дкритим!\n";
		return 0;
	}
	t.seekg(0, ios_base::end);
	int k = t.tellg() / sizeof(Book);
	t.close();
	return k;
}

void Library::readFile(char* txt, Book* books, int n)
{
	ifstream t(txt, ios::binary);
	for (int i = 0; i < n; i++) {
		t.read((char*)&books[i], sizeof books[i]);
	}
	t.close();
}
void Library::out_author(Book* books, int n, char author[])
{
	for (int i = 0; i < n; ++i) {
		if (strcmp(books[i].getauthor(), author) == 0) {
			books[i].show_book();
		}
	}
}
void Library::out_publisher(Book* books, int n, char publisher[])
{
	for (int i = 0; i < n; ++i) {
		if (strcmp(books[i].getpublisher(), publisher) == 0) {
			books[i].show_book();
		}
	}
}
void Library::out_date(Book* books, int n)
{
	int date;
	cout << "\n¬вед≥ть в≥дправний р≥к: ";
	cin >> date;
	for (int i = 0; i < n; ++i) {
		if (date <= books[i].getdate()) {
			books[i].show_book();
		}
	}
}