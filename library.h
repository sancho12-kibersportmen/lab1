#include <iostream>
#include <vector>
#include "book.h"
#ifndef LIBRARY_H
#define LIBRARY_H

class Library : public Book
{
    public:
        std::vector<Book> library;
        void Add_book_to_library(Book &book);
        void Remove_book_from_library(Book &book);
        void Print_all_books();
        int Get_nr_of_books();

};

#endif