/*  This is a program that manages 2 classes Book and Library. This code shows how to use different 
    class attributes. The main.cpp file contains the library.h file that is a class that inherits the 
    book class. Here we create 3 books manually and then we enter the menu in the switch loop with the 
    variable choice which we scan every time we execute a function
*/

#include <stdbool.h>
#include "library.h"
#include "functions.h"
int main()
{
    Library librarius;// this is an Library object that manages the library and its functions
    std::vector<Book> books; // contains all the books

    Book book1(624,2014,"Heroes of Olympus","Rick Riordan","9780268192030");
    librarius.Add_book_to_library(book1);

    Book book2(251,2013,"After the Cure","Deirdre Gould","97803417190509");
    librarius.Add_book_to_library(book2);

    Book book3(91,2009,"Roadtown","Edgar Chamble","953738240386");
    librarius.Add_book_to_library(book3);
    

    librarius.Print_all_books();// a method of Library class
    int choice = 1;
    while(choice != false)
    {
        Show_menu();
        std::cin >> choice;
        switch(choice)
        {
            case 1:
                Add_a_book(librarius);
            break;

            case 2:
                Remove_a_book(librarius);
            break;

            case 3:
                List_all_the_library(librarius);
            break;

            case 4:
                std::cout << "You have " << Get_nr_of_books(librarius) << " books" << std::endl;
            break;

            case 0:
                exit(0);
            break;
        }
    }

    return 0;
}



