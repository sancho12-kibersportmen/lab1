/*  this file contains all the functions of the menu

*/

#include <iostream>
#include "functions.h"
#include "library.h"
void Show_menu()
{
    std::cout << "Choose one option" << std::endl;
    std::cout << "1.Add one book" << std::endl;
    std::cout << "2.Remove one book" << std::endl;
    std::cout << "3.List all the library" << std::endl;
    std::cout << "4.Get number of books in the library" << std::endl;
    std::cout << "0.Exit" << std::endl;
}
void Add_a_book(Library &librarius) // gets as a parameter the object librarius as an reference to chnge the original vector
{
    int pages;
    int year;
    std::string name;
    std::string author;
    std::string isbn;
    std::cout << "Enter: pages,year,name,author,isbn" << std::endl;
    std::cin >> pages;
    std::cin >> year;
    std::cin.ignore(); 
    std::getline(std::cin, name);
    std::getline(std::cin, author);
    std::getline(std::cin, isbn);
    librarius.library.emplace_back(pages,year,name,author,isbn);
}
void Remove_a_book(Library &librarius)//gets as a parameter the object librarius as an reference to chnge the original vector
{
    std::string book_to_del;
    std::cout << "Type the name of the book to delete" << std::endl;
    std::cin.ignore(); // cleares new line
    std::getline(std::cin,book_to_del);
    for(auto i = librarius.library.begin(); i != librarius.library.end(); i++)
    {
        if(i->name == book_to_del)// iteretes through the vector library to find the book
        {
            librarius.library.erase(i);
            break;
        }
    }
}
void List_all_the_library(Library librarius)
{
    librarius.Print_all_books();
}
int Get_nr_of_books(Library librarius)
{
    return librarius.library.size();
}