#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <cstring>
#include "Book.h"
class Library {
public:
    void show_books(Book books[], int n);
    void add_books(Book books[], int n);
    void fileWrite(char* txt, Book books[], int n);
    int fileOfSize(char* txt);
    void readFile(char* txt, Book* books, int n);
    void out_author(Book* books, int n, char author[]);
    void out_publisher(Book* books, int n, char publisher[]);
    void out_date(Book* books, int n);
};