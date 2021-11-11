#include "Book.h"
#include <iostream>
using namespace std;
void Book::add_book()
{
    cout << "Введіть прізвище автора: ";
    cin >> author;
    cout << "Введіть назву книги: ";
    cin >> title;
    cout << "Введіть видавництво: ";
    cin >> publisher;
    cout << "Введіть тип палітурки: ";
    cin >> typepolit;
    cout << "Введіть рік видання: ";
    cin >> date;
    cout << "Введіть ціну: ";
    cin >> cost;
    cout << "Введіте id: ";
    cin >> id;

}
void Book::show_book()
{
    cout << "Автор: " << author << endl
        << "Назва книги: " << title << endl
        << "Виданицто: " << publisher << endl
        << "Тип палітурки: " << typepolit << endl
        << "Рік видання: " << date << endl
        << "Ціна: " << cost << endl
        << "id: " << id << endl;
}