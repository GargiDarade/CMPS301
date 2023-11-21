// C++ implementation of the Group Exercise 3
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

// starting function/Driver code
int main()
{
    string operation;
    double n1,n2,res;

    
    cout << "\n-------------------Welcome to Math Calculator----------------------";
    cout << "\nChoose an operation to solve (addition/subtraction/multiplication/division): ";
    cin >> operation;
    cout << "\nEnter your first number: ";
    cin >> n1;
    cout << "\nEnter your second number: ";
    cin >> n2;
    if (operation.compare("addition") == 0)
    {
        res= n1 + n2;
        cout << "\nYour answer is: "<<res;
    }
    else if (operation.compare("subtraction") == 0)
    {
        res= n1 - n2;
        cout << "\nYour answer is: "<<res;
    }
    else if (operation.compare("multiplication") == 0)
    {
        res= n1 * n2;
        cout << "\nYour answer is: "<<res;
    }
    else if (operation.compare("division") == 0)
    {
        res= n1 / n2;

        //calculated Mod
        cout << "\nYour answer is: "<<int(res)<< " and your remainder is (calculated Mod): " <<(res-int(res))*n2;
        //inbult C++ fmod function
        cout << "\nYour answer is: "<<int(res)<< " and your remainder is (inbult fmod function): " <<fmod(n1,n2);
    }
    else
    {
        cout << "\nThe operation that you have chosen is not a valid one. Please try again.";
    }
    
    cout << "\nThanks for using the Math Calculator!.";
    cout << endl;
	return 0;
}
