#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
#include <fstream>
using namespace std;
class Book
{
private:
    char       author[30];
    char       title[30];
    char       publisher[30];
    char       typepolit[30];
    unsigned int date;
    unsigned int cost;
    unsigned int id;
public:
    virtual void add_book();
    virtual void show_book();
    void setauthor(char* author) { strcpy_s(this->author, author); }
    void settitle(char* title) { strcpy_s(this->title, title); }
    void setpublicher(char* publisher) { strcpy_s(this->publisher, publisher); }
    void settypepolit(char* typepolit) { strcpy_s(this->typepolit, typepolit); }
    void setdate(unsigned int date) { this->date = date; }
    void setcost(unsigned int cost) { this->cost = cost; }
    void setid(unsigned int id) { this->id = id; }
    char* getauthor() { return author; }
    char* gettitle() { return title; }
    char* getpublisher() { return publisher; }
    char* gettypepolit() { return typepolit; }
    int getdate() { return date; }
    int getcost() { return cost; }
    int getid() { return id; }
};