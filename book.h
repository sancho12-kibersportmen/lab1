#include <string>

#ifndef BOOK_H
#define BOOK_H

class Book
{
    public:
        int pages;
        int year;
        std::string name;
        std::string author;
        std::string isbn;

        Book();
    
        Book(int pages,int year, std::string name, std::string author,std::string isbn);

        void print_book(Book book);
        ~Book();
};


#endif