#include "Book.h"
#include <iostream>
using namespace std;
void Book::add_book()
{
    cout << "������ ������� ������: ";
    cin >> author;
    cout << "������ ����� �����: ";
    cin >> title;
    cout << "������ �����������: ";
    cin >> publisher;
    cout << "������ ��� ��������: ";
    cin >> typepolit;
    cout << "������ �� �������: ";
    cin >> date;
    cout << "������ ����: ";
    cin >> cost;
    cout << "������ id: ";
    cin >> id;

}
void Book::show_book()
{
    cout << "�����: " << author << endl
        << "����� �����: " << title << endl
        << "���������: " << publisher << endl
        << "��� ��������: " << typepolit << endl
        << "г� �������: " << date << endl
        << "ֳ��: " << cost << endl
        << "id: " << id << endl;
}