#include <string>
#include <windows.h>
#include "Book.h"
#include "Library.h"
#include "NewLibrary.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    NewLibrary l;
    NewBook* books;
    Library ln;
    char fName[80];
    int ch = 0;
    while (1) {
        cout << "Виберіть пункт меню:\n"
            << " 1: Додати книгу в нову бібліотеку?\n"
            << " 2: Додати книгу в стару бібліотеку?\n"
            << " 3: Переглянути бібліотеку\n"
            << " 4: Список книг по автору\n"
            << " 5: Список книг по найменуванню видавництва\n"
            << " 6: Список книг після зазначеного року видання\n"
            << " 7: Переглянути декілька бібліотек\n"
            << "0: Виберіть варіант довідки (0 для виходу): ";
        cin >> ch;
        cout << "\n\n";
        switch (ch) {
        case 1:
            cout << "Скільки книг плануєте додати: ";
            int n;
            cin >> n;
            books = new NewBook[n];
            l.add_books(books, n);
            cin.ignore();
            cout << "\nВведіть ім'я файлу: ";
            cin.getline(fName, 80);
            l.fileWrite(fName, books, n);
            break;
        case 2: {
            Book* books;
            cout << "Скільки книг плануєте додати: ";
            int n;
            cin >> n;
            books = new Book[n];
            ln.add_books(books, n);
            cin.ignore();
            cout << "\nВведіть ім'я файлу: ";
            cin.getline(fName, 80);
            ln.fileWrite(fName, books, n);
            break; }
        case 3: {
            cout << "\nВведіть тип файлу(0 - old /1 - new): ";
            int flag;
            cin >> flag;
            if (flag == 1) {
                cout << "\nВведіть ім'я файлу: "; cin.ignore();
                cin.getline(fName, 80);
                n = l.fileOfSize(fName);
                books = new NewBook[n];
                l.readFile(fName, books, n);
                cout << "\n Вміст файлу: \n";
                l.show_books(books, n); cin.ignore();
            }
            if (flag == 0)
            {
                cout << "\nВведіть ім'я файлу: "; cin.ignore();
                cin.getline(fName, 80);
                Book* books;
                n = ln.fileOfSize(fName);
                books = new Book[n];
                ln.readFile(fName, books, n);
                cout << "\n Вміст файлу: \n";
                ln.show_books(books, n); cin.ignore();
            }
            break; }
        case 4:
            cout << "\n <<Пошук по автору>>\n";
            char author[30];
            cout << "\nВведіть ім'я файлу: "; cin.ignore();
            cin.getline(fName, 80);
            cout << "\n Введіть ім'я автора: "; cin.getline(author, 30);
            n = l.fileOfSize(fName);
            if (n != 0) {
                books = new NewBook[n];
                l.readFile(fName, books, n);
                l.out_author(books, n, author);
            }
            else {
                Book* books;
                n = ln.fileOfSize(fName);
                books = new Book[n];
                ln.readFile(fName, books, n);
                ln.out_author(books, n, author);
            }
            break;
        case 5:
            cout << "\n <<Пошук по найменуванню видавництва>>\n";
            char publisher[30];
            cout << "\nВведіть ім'я файлу: "; cin.ignore();
            cin.getline(fName, 80);
            cout << "\n Введіть найменування видавництва: "; cin.getline(publisher, 30);
            n = l.fileOfSize(fName);
            if (n != 0) {
                books = new NewBook[n];
                l.readFile(fName, books, n);
                l.out_publisher(books, n, publisher);
            }
            else {
                Book* books;
                n = ln.fileOfSize(fName);
                books = new Book[n];
                ln.readFile(fName, books, n);
                ln.out_publisher(books, n, publisher);
            }
            break;
        case 6:
            cout << "\n <<Пошук книг, що видані після заданого року>>\n";
            cout << "\nВведіть ім'я файлу: "; cin.ignore();
            cin.getline(fName, 80);
            n = l.fileOfSize(fName);
            if (n != 0) {
                books = new NewBook[n];
                l.readFile(fName, books, n);
                l.out_date(books, n);
            }
            else {
                Book* books;
                n = ln.fileOfSize(fName);
                books = new Book[n];
                ln.readFile(fName, books, n);
                ln.out_date(books, n);
            }
            break;
        case 7: {
            Book* books;
            NewBook* booksnew;
            int n1;
                int n2;
            cout << "\nВведіть ім'я файлу: "; cin.ignore();
            cin.getline(fName, 80);
            n1 = l.fileOfSize(fName);
            if (n1 != 0) {
                booksnew = new NewBook[n1];
                l.readFile(fName, booksnew, n1);
                cout << "\n Вміст файлу: \n";
                l.show_books(booksnew, n1); cin.ignore();
            }
            cout << "\nВведіть ім'я файлу: "; cin.ignore();
            cin.getline(fName, 80);
            n2 = ln.fileOfSize(fName);
            if (n2 != 0) {
                books = new Book[n2];
                ln.readFile(fName, books, n2);
                cout << "\n Вміст файлу: \n";
                ln.show_books(books, n2); cin.ignore();
            }
          /*  Book** generalBook = new Book * [n1 + n2];
            for (int i = 0; i < n1; i++)
                generalBook[i] = &books[i];
            int j = 0;
            for (int i = n; i < n1 + n2; i++)
                generalBook[i] = &booksnew[j++];

            for (int i = 0; i < n1 + n2; i++)
                (*generalBook[i]).show_book();
                */
            break; }
        case 0: {exit(0);
            break; }
        }
    }
    cout << "\n";
    system("pause");
    return 0;
}