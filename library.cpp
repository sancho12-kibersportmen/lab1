#include <iostream>
#include "library.h"
using namespace std;  
// gets book as a reference to change the original variable and creates 
void Library::Add_book_to_library(Book &book)
{
    cout << "Book"   << " '"  << book.name  << "' " << "added to library"<< endl;
    library.emplace_back(book);
}
// gets book as a reference to remove the original variable and creates 
void Library::Remove_book_from_library(Book &book)
{
    cout << "Book"   << " '"  << book.name  << "' " << "removed from library"<< endl;
    library.pop_back();
}

void Library::Print_all_books()
{
    cout << endl;
    for(auto i = library.begin(); i  != library.end(); i++)
    {
        cout << i->name << endl;
        i->print_book(*i);// calls the print_book method from book class to show a book characteristics
        cout << endl;
    }
}
int Library::Get_nr_of_books()
{
    return library.size();
}

