// C++ implementation of the GroupExercise 7
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <iomanip>
using namespace std;
//constant variables are used for price and station
//cannot be assigned value anywhere in the program
const double RegularPrice=4.55;
const double PremiumPrice=4.85;
const string stationName="Costco Gasoline";


// starting function/Driver code
int main()
{
   
    
    string gasType;
    string payType;
    
    double gallons;
    double pricePerGallon;
    
    //display your gas station name, types of gas that you can purchase including the price
    //by using settw,setfill and left alignmnet
    cout << left; 
    cout << endl;
    cout << "-----------------"<<stationName<<"--------------------"<< endl;
    cout << setfill(' '); 
    gasType="Regular (R)";
    cout << left <<" "<< setw(25) << gasType << right << setw(25) <<"$" << RegularPrice << " "<< endl;
   

    gasType="Premium (P)";
    cout << left <<" "<< setw(25) << gasType << right << setw(25) <<"$" << PremiumPrice  << " "<< endl;
   
    //ask the user to select gas type, number of gallons that they would like to fill up
    gasType="";
    cout << "\nPlease Choose a gas type:";
    cin>>gasType;
    if (gasType.compare("P") == 0 || gasType.compare("Premium") == 0)
    {
        cout << "\nYou have chosen the most expensive gas!";
        pricePerGallon = PremiumPrice;
    } else if (gasType.compare("R") == 0 || gasType.compare("Regular") == 0)
    {
        cout << "\nGood choice! You are saving lots of money!";
        pricePerGallon = RegularPrice;
    }
    else
    {
        cout << "\nThe Gas Type that you have chosen is not a valid one. Please try again.";
        exit(0); //if error exit program
    }

    cout << "\nHow many gallons:";
    cin>>gallons;
    //calculate total gas price by gallons.
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places
    cout<<"\nYour total is $"<<gallons*pricePerGallon;
    cout << endl;
	return 0;
}
