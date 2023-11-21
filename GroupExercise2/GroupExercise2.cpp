// C++ implementation of the Group Exercise 2
// Student Name: Gargi Darade
// Student ID: 11990396
// Subject/Class: CMPS 301 Programming Concepts
//Note: some inbuilt string functions are used.
#include <iostream>
#include <string>
using namespace std;

// starting function/Driver code
int main()
{
    string fistName, lastName, major, majorIn;
    char FnIn;
    char LnIn;
    int age;
    cin.clear(); //to restore the input stream to a working state.
    cout << "\nPlease enter first name: ";
    FnIn = cin.peek(); //read first char but do not remove from inout stream
    //cin.get(FnIn);
    //cin.putback(FnIn);
    cin >> fistName;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout << "\nPlease enter last name: ";
    LnIn = cin.peek(); //read first char but do not remove from inout stream
    //cin.get(LnIn);
    //cin.putback(LnIn);
    cin >> lastName;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout << "\nPlease enter age in years: ";
    cin >> age;
    cin.ignore(); //line clears orignores the newline from the stream.
    cout << "\nPlease enter major: ";
    getline(cin, major);
    //'Full Name: John Doe, Age: 25, Major: Computer Science (CS)'
    cout << "\nFull Name: " << fistName << " " << lastName << ", Age: " << age << ", Major: " << major << " (" << major[0];
    string strBSpace = " ";
    // Find first occurrence of " "
    size_t found = major.find(strBSpace);
    //check and get second initial because Major can have two words
    if (found != string::npos)
    {
      //if found print second initial
      cout << major[found+1] << ").";
    }
    else
    {
      //else print closing parentheses
      cout << ").";
    }
  
    string str1(1, LnIn); //convert char to string because replace function takes only string 
    // Replaces 1 characters from 0th index by str1
    fistName.replace(0, 1, str1);

    string str2(1, FnIn); //convert char to string because replace function takes only string 
    // Replaces 1 characters from 0th index by str1
    lastName.replace(0, 1, str2);
    // Improvised name: Dohn Joe
    cout << "\nImprovised name: " << fistName << " " << lastName << ".";
    
    cout << endl;
    return 0;
}
