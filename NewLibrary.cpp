#include "NewLibrary.h"
#include "Book.h"
using namespace std;
void NewLibrary::add_books(NewBook books[], int n)
{
	for (int i = 0; i < n; i++)
		books[i].add_book();
}
void NewLibrary::show_books(NewBook books[], int n) {
	for (int i = 0; i < n; i++)
		books[i].show_book();
}
void NewLibrary::fileWrite(char* txt, NewBook books[], int n)
{
	ofstream t(txt, ios::binary | ios::app);
	for (int i = 0; i < n; i++) {
		t.write((char*)&books[i], sizeof books[i]);
	}
	t.close();
}
int NewLibrary::fileOfSize(char* txt)
{
	ifstream t(txt, ios::binary);
	if (!t.is_open()) {
		cout << "‘айл не може бути в≥дкритим!\n";
		return 0;
	}
	t.seekg(0, ios_base::end);
	int k = t.tellg() / sizeof(NewBook);
	t.close();
	return k;
}

void NewLibrary::readFile(char* txt, NewBook* books, int n)
{
	ifstream t(txt, ios::binary);
	for (int i = 0; i < n; i++) {
		t.read((char*)&books[i], sizeof books[i]);
	}
	t.close();
}
void NewLibrary::out_author(NewBook* books, int n, char author[])
{
	for (int i = 0; i < n; ++i) {
		if (strcmp(books[i].getauthor(), author) == 0) {
			books[i].show_book();
		}
	}
}
void NewLibrary::out_publisher(NewBook* books, int n, char publisher[])
{
	for (int i = 0; i < n; ++i) {
		if (strcmp(books[i].getpublisher(), publisher) == 0) {
			books[i].show_book();
		}
	}
}
void NewLibrary::out_date(NewBook* books, int n)
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