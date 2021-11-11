#pragma once
#include "NewBook.h"
class NewLibrary
{
public:
    void show_books(NewBook books[], int n);
    void add_books(NewBook books[], int n);
    void fileWrite(char* txt, NewBook books[], int n);
    int fileOfSize(char* txt);
    void readFile(char* txt, NewBook* books, int n);
    void out_author(NewBook* books, int n, char author[]);
    void out_publisher(NewBook* books, int n, char publisher[]);
    void out_date(NewBook* books, int n);
};