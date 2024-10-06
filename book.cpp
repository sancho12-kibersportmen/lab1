#include <iostream>
#include <string>
#include "book.h"

using namespace std;


Book::Book() = default;
// constructor that gets as paramaters all book's characteristics and creates a book
Book::Book(int pages,int year, string name, string author,string isbn)
{
    this->pages = pages;
    this->year = year;
    this->name = name;
    this->author = author;
    this->isbn = isbn;
}

void  Book::print_book(Book book)
{
    cout << "pages = " <<  book.pages  << endl;
    cout << "year = "  <<  book.year   << endl;
    cout << "name = "  <<  book.name   << endl;
    cout << "author = "<<  book.author << endl;
    cout << "isbn = "  <<  book.isbn << endl;
}
Book::~Book()
{
    cout << "destrutor called" << endl;
}
