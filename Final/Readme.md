Overview of your app (What is it, who is the intended audience, problem statement)

Final Assignment: simple library book management system app

Final Assignment is a console app
Intended audience of Final Assignment are library users

problem statement
For this final, you will write a simple library book management system in C++, where the program should give an option for the user to Add a Book, Edit a Book, Search a Book and Delete a Book. The library should have a collection of books and the information should be stored in two arrays: one for book titles and another for corresponding authors.
When you open the program, the program should instruct you to select an option to either Add a Book, Edit a Book, Search a Book and Delete a Book using numbers as an option.

If the user selects option 1 – Add a Book, then the program will ask the user to enter the name of the book and the author of the book. From there, the information should get saved in its respective array and then output the following: “Book has been added to our inventory. Press any key to continue”, where the user will press any key to return to the main menu.

If the user selects option 2 – Edit a Book, then the program will ask the user to enter the name of the book. From there, then the system will look for the name of the book. If the system finds the name of the book, it will first display the name of the book and then ask the user to see if the name is correct. If the user says no, then they will have an opportunity to change the name of the book. If the user says yes, then it will move on to the next question that will ask to see if the author name is correct. If the user says no, then the user can edit the author name, but if the user says yes, then you will move on to display the output that will say the following: “Book has been successfully edited. Press any key to continue”, where the user will press any key to return to the main menu. On the other hand, if the system is not able to find the book name, then the system will output “Book not found. Press any key to continue”, where the user will press any key to return to the main menu.

If the user selects option 3 – Search a Book, then the program will ask the user to enter the name of the book. From there, then the system will look for the name of the book. If the system finds the name of the book, then the system will display the book name and the author name and then display the output: “Press any key to continue”, where the user will press any key to return to the main menu. On
the other hand, if the system is not able to find the book name, then the system will output “Book not found. Press any key to continue”, where the user will press any key to return to the main menu.

If the user selects option 4 – Delete a Book, then the program will ask the user to enter the name of the book. From there, then the system will look for the name of the book. If the system finds the name of the book, then the system will delete the name of the book and the authors from its respective array and then display the following output: “Book has been successfully deleted from our inventory. Press any key to continue”, where the user will press any key to return to the main menu. On the other hand, if the system is not able to find the book name, then the system will output “Book not found. Press any key to continue”, where the user will press any key to return to the main menu.

If the user selects option 5 – Check out a Book, then the program will ask the user to enter the name of the book to check out. From there, then the system will look for the name of the book. If the system finds the name of the book, then it will ask the user to enter the name of the person that will be checking out the book. From there, it will write the name of the person in the array and then let the user know that the book has been checked out and to press any key to continue!

Intended audience are library user

Features of the app
App menu is displayed on screen, you have to choose option from it.
Since this is simple app very limited options are displayed
options are
1 - Add a Book
2 - Edit a Book
3 - Search a Book
4 - Delete a Book
5 - Check out a Book
6 - Display all Books
7 - Exit

 

How to run the app
First you have to compile respective .cpp source file, can be done in IDE or by following commands in console window

g++ library.cpp  -o library.exe

please not here g++ is the compiler
Since both apps are console apps need to start in console window by executing respective exe file

output of different use cases is stored in librayOutPut.txt file.
 
