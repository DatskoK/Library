#include "NewBook.h"
#include "Book.h"
#include <iostream>
using namespace std;
void NewBook::add_book()
{
    Book::add_book();
    cout << "Введіть категорію: ";
    cin >> category_type;
    cout << "Лецензія (Y/N): ";
    char th;
    cin >> th;
    if (th == 'Y' || th == 'y') {
        license = true;
    }
    else {
        license = false;
    }
}
void NewBook::show_book()
{
    Book::show_book();
    cout << "Категрія: " << category_type << endl
        << "Ліцензія: " << ((license==true) ? "true" : "false") << endl << endl;

}