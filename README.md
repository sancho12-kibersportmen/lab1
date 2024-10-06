This program is a model of using classes and its utilities. Its uses inheritance,destructors,constructors and methods.
1. Overview
The program simulates a basic library management system. Users can:

Add books to the library.
Remove books by their year of publication.
List all books currently in the library.
Retrieve the total number of books in the library.
The program uses C++ standard library components such as std::vector to manage collections of books and implements object-oriented programming principles using classes.

2. Classes
2.1 Book Class
The Book class models an individual book with the following attributes:

pages: Number of pages in the book (integer).
year: Year of publication (integer).
name: Title of the book (string).
author: Author's name (string).
isbn: ISBN number (string).
2.1.1 Member Functions
Book Constructor: Initializes the book with its pages, year, name, author, and ISBN.

print_book(): Displays all the details of the book.

2.2 Library Class
The Library class manages a collection of Book objects.

2.2.1 Attributes
library: A std::vector<Book> that holds all the books currently in the library.
2.2.2 Member Functions
Add_book_to_library(Book book): Adds a Book object to the library vector.

Remove_book_from_library(Book book): Removes the most recent book added to the library using pop_back(). (In practice, Remove_a_book() handles removing specific books based on their year.)

Print_all_books(): Iterates over the library vector and prints out details of every book stored.

Get_nr_of_books(): Returns the total number of books in the library by returning the size of the library vector.

3. Functions
3.1 Show_menu()
Displays the options available to the user, such as adding a book, removing a book, listing all books, and getting the total number of books.

3.2 Add_a_book(Library& librarius)
Prompts the user to input details of a new book (pages, year, name, author, and ISBN) and adds it to the library by calling emplace_back().

Parameters:
librarius: A reference to the Library object where the new book will be added.

3.3 Remove_a_book(Library& librarius)
Prompts the user for the year of a book to delete. It iterates through the library and removes the first book that matches the given year using erase().

Parameters:
librarius: A reference to the Library object from which the book will be removed.

3.4 List_all_the_library(Library& librarius)
Calls the Print_all_books() method of the Library class, which prints all books currently stored in the library.

Parameters:
librarius: A reference to the Library object whose books will be listed.

3.5 Get_nr_of_books(Library& librarius)
Returns the total number of books in the library by calling librarius.library.size().

Parameters:
librarius: A reference to the Library object from which the number of books will be returned.

4. Main Program Flow
The main() function initializes the Library object and adds three initial books to the library. It then enters a loop where the user can select an option from the menu:

Add a book: Calls Add_a_book() to add a book to the library.
Remove a book: Calls Remove_a_book() to remove a book by its year.
List all books: Calls List_all_the_library() to print all books in the library.
Get number of books: Calls Get_nr_of_books() to display the total number of books in the library.
Exit: Ends the program.


5. Considerations
Memory Management: All books are managed in a std::vector, so no manual memory management is required.
User Input: The program relies on console input, so careful validation of inputs such as integers and strings should be considered in further development.

TASK 2
OOP is based on 4 main principles. If we understand these principles it will be easy to understand this paradigm and how we can implement future projects. Let's take them one by one.

Abstracting 
    is the process of "hiding" some functionality that you don't need to know. For example, when working in a team of programmers you might be given a task where you need to create the database save functionality. Other colleagues will use your functionality many times when they save things to the database. Well, they don't need to know exactly how you save that data, how you wrote the code and what exactly happens in your functionality. They will simply use your functionality by sending the data to the database with minimal effort. In this way, the application code becomes somewhat modular, i.e. made up of self-contained chunks that do certain well-defined things.
Encapsulation 
    is the process of keeping data and functions separate from the outside. If we take the whole previous example where you do the add functionality in the database, you might have some variables there where you hold the username and password to connect to the database. Well, you wouldn't want another functionality to be able to modify the username variable or accidentally overwrite it with a username used in the create user area. By encapsulation we create a capsule that delimits the inside from the outside.
Inherit 
    or Inheritance allows some classes to inherit properties from other classes. A good example to explain inheritance is the case of an application selling cars. These cars generally have the same properties with some small differences. They will all have a certain fuel type, engine displacement or price. The difference comes when we are interested in the number of seats in the case of a passenger car and the maximum transportation mass in the case of a truck. In our code, we will need 2 classes namely Car and Truck which have quite a lot of properties in common. In order not to duplicate the properties we could create a main class called Vehicle which will have the common properties and then the classes Car and Truck which will inherit Vehicle and will have the specific properties.
Polymorphism 
    is the process by which we can create multiple copies of the same method that can receive different inputs. As a practical example we can take here again a car sales website. We established before that we need a Vehicle class and in it we want to create a method that will bring us all the information about a car based on its license plate number. At the same time we also want to be able to do this based on the chassis series. Well these 2 data are different in format and length so we need 2 methods, with the same name that receive different inputs but display the same thing.