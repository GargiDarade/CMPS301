// C++ implementation of simple library book management system app 
//Student Name: Gargi Darade

//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

//global vars
const int MAX_NUMBER_OF_BOOKS = 32; // Max books can be in library, this is used as size of parallel arrays
string BookName[MAX_NUMBER_OF_BOOKS];
string Author[MAX_NUMBER_OF_BOOKS];
string checkoutName[MAX_NUMBER_OF_BOOKS];

int totalBooks=0;


// this function fills some book data into the arrays
//you can edit if you would like to change data
void fillbooksInfo()
{
    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="C++ Programming Program Design Including Data Structures";
        Author[totalBooks]="D.S. Malik";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element

    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="Man's Search For Meaning";
        Author[totalBooks]=" Victor E. Frankl";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element

    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="Think And Grow Rich";
        Author[totalBooks]="Napoleon Hill";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element
   
    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="Who Moved My Cheese";
        Author[totalBooks]="Dr Spencer Johnson";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element

    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="Rich Dad Poor Dad";
        Author[totalBooks]="Robert Kiyosaki";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element
   
    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="The 7 Habits Of Highly Effective People";
        Author[totalBooks]="Stephen Covey";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element

    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="How to stop worrying and start living";
        Author[totalBooks]="Dale Carnegie";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element
    
    if(totalBooks<MAX_NUMBER_OF_BOOKS)
    {
        BookName[totalBooks]="The Monk Who Sold His Ferrari";
        Author[totalBooks]="Robin Sharma";
        checkoutName[totalBooks]="";
    }
    totalBooks = totalBooks + 1; //go to the next element
}
//Function to display all data in the parallel arrays
void DisplayAllBooks()
{
    cout << left; 
    cout << endl;
    cout << setfill('-'); 
    cout << setw(42)<<""<<" All books in the library. ";
    cout << setw(58)<<""<< endl;;
    //print header    
    cout << setfill(' '); 
    cout <<"| "<< setw(60) << "Book" <<"| " << setw(30)<< "Author" << "| "<< setw(30)<< "check out by" << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(127)<<""<< endl;

    //print books
    for(int i=0;i<totalBooks;i++)
    {
        cout << setfill(' '); 
        //index is used to print movie number
        cout <<"| "<< setw(60) << to_string(i+1) + ") " + BookName[i] <<"| " << setw(30)<< Author[i] << "| "<< setw(30)<< checkoutName[i] << "| "<< endl;
        cout << setfill('-'); 
        cout << setw(127)<<""<< endl;
    }
    cout << setfill(' '); //reset fill to blank
}
//Function to display main menu which prints available options
void printMainMenu()
{
    cout <<"\n Welcome to Wilson Library!";
    cout <<"\n Please select the following options:";
    cout <<"\n 1 - Add a Book";
    cout <<"\n 2 - Edit a Book";
    cout <<"\n 3 - Search a Book";
    cout <<"\n 4 - Delete a Book";
    cout <<"\n 5 - Check out a Book";
    cout <<"\n 6 - Display all Books";
    cout <<"\n 7 - Exit";
    cout <<"\n Please enter your option:";
}

//the book name and author name will get saved to its respective array
void AddBook()
{
    cin.ignore(); //line clears orignores the newline from the stream.
    cout<<"\nEnter Book Name: ";
    getline(cin, BookName[totalBooks]); //will add to the end of list
    cout<<"\nEnter Author Name: ";
    getline(cin, Author[totalBooks]); //will add to the end of list

    checkoutName[totalBooks]="";
    totalBooks =totalBooks + 1; // book added
    cout<<"\nBook has been successfully added! ";
    system("pause");
}
//if book found function will return index of array, else will return -1
int getBookIndex(string bName)
{
    int index=-1;
    for(int i=0;i<totalBooks;i++)
    {
        if (BookName[i].compare(bName) == 0)
        {
            index=i;
            break;
        }
    }
    return index;
}
//Function to search book in the array, if found it displays title and author else reports error
void SearchBook()
{
    string bookName;
    int index=-1;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout<<"\nEnter Book Name: ";
    getline(cin, bookName);
    index=getBookIndex(bookName); 
    //If the book name is found, display the following output
    if(index != -1)
    {
        //found book
        cout<<"\nBook Name: " << BookName[index];
        cout<<"\nAuthor Name: " << Author[index] << endl;
        system("pause");
    }
    else
    {
        cout<<"\nBook name is not found! ";
        system("pause");
    }
}

//Function to search and delete book in the array, if found it will removed from arrays else reports error
void DeleteBook()
{
    string bookName;
    int index=-1;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout<<"\nEnter Book Name: ";
    getline(cin, bookName);
    index=getBookIndex(bookName); 
    //If the book name is found, display the following output
    if(index != -1)
    {
        //found book
        BookName[index]="";       //remove book name
        Author[index]="";         //remove Author name
        checkoutName[index]="";   //remove person name
        cout<<"\nBook has been deleted from the inventory! ";
        system("pause");
    }
    else
    {
        cout<<"\nBook name is not found! ";
        system("pause");
    }
}


//if book found, the book name and/or author name can be change
void EditBook()
{
    string bookName;
    string looksgood;
    int index=-1;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout<<"\nEnter Book Name: ";
    getline(cin, bookName);
    index=getBookIndex(bookName); 
    //If the book name is found, display the following output
    if(index != -1)
    {
        //found book
        cout<<"\nBook Name: " << BookName[index];
        cout<<"\nDoes this look good to you (Yes/No): ";
        cin >> looksgood;
        //cout<<"\nlooksgood " << looksgood << "\n";
        if(looksgood.compare("No") == 0 || looksgood.compare("no") == 0)
        {
            cin.ignore(); //line clears orignores the newline from the stream.
            cout<<"\nEnter Book Name: ";
            getline(cin, BookName[index]); //will over write  
            cout<<"\nYou have successfully edited the Book Name! ";
            system("pause");
        }

        cout<<"\nAuthor Name: " << Author[index];
        cout<<"\nDoes this look good to you (Yes/No): ";
        cin >> looksgood;
        //cout<<"\nlooksgood " << looksgood << "\n";
        if(looksgood.compare("No") == 0 || looksgood.compare("no") == 0)
        {
            cin.ignore(); //line clears orignores the newline from the stream.
            cout<<"\nEnter Author Name: ";
            getline(cin, Author[index]); //will over write  
            cout<<"\nYou have successfully edited the Author Name! ";
            system("pause");
        }
    }
    else
    {
            cout<<"\nBook name is not found! ";
            system("pause");
    }

}

//Function to search and add person nome who has check out the Book,
//if found it will  add person name against given book else reports error
void CheckoutBook()
{
    string bName;
    //string personName;
    int index=-1;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout<<"\nEnter Book Name: ";
    getline(cin, bName);
    index=getBookIndex(bName); 
    //If the book name is found, display the following output
    if(index != -1)
    {
        //found book
        //ask the user to enter the name of the person that will be checking out the book. 
        //From there, it will write the name of the person in the array and then 
        //let the user know that the book has been checked out and to press any key to continue!
        cin.ignore(); //line clears orignores the newline from the stream.
        cout<<"\nEnter the name of the person: ";
        getline(cin, checkoutName[index]); //will over write  
        cout<<"\nYou have successfully checked out Book, " << BookName[index] << " by " << Author[index]  << endl; ;
        system("pause");
    }
    else
    {
        cout<<"\nBook name is not found! ";
        system("pause");
    }
}

//Function which ask user for options displayed in menu, and calls corresponding function
void MainMenu()
{
    int choice=0;
    while (choice != 7)
    {
        printMainMenu();
        cin >> choice;
        if (choice == 1)
        {
            AddBook();
        } else if (choice == 2)
        {
            EditBook();
        } else if (choice == 3)
        {
            SearchBook();
        } else if (choice == 4)
        {
             DeleteBook();
        } else if (choice == 5)
        {
            CheckoutBook();
        } else if (choice == 6)
        {
            DisplayAllBooks();
        } else if (choice == 7)
        {
            cout<<"\nThank you for using Wilson Library!";        
        } else
        {
            cout<<"\nPlease enter valid option.\n";        
            system("pause");
        }
    }    
}

//driver function
int main()
{
    fillbooksInfo();
    MainMenu();
    cout << endl;
	return 0;
}

