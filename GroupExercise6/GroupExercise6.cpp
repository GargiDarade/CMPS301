// C++ implementation of Group Exercise 5 (Problem 1: Gas Station)
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <iomanip>
using namespace std;
//constant variables are used for price and station
//cannot be assigned value anywhere in the program
const double RegularPrice=5.02;
const double MidgradePrice=5.22;
const double PremiumPrice=5.42;
const double DieselPrice=6.03;
const double SalesTax=0.05;
const string stationName="Shell gas";


// starting function/Driver code
int main()
{
   
    
    string gasType;
    string payType;
    gasType="Gas Type";
    double gallons;
    double pricePerGallon;
    
    //display your gas station name, types of gas that you can purchase including the price
    //by using settw,setfill and left alignmnet
    cout << left; 
    cout << endl;
    cout << "-----------------Welcome to "<<stationName<<" station--------------------"<< endl;
    cout << setfill(' '); 
    cout <<"| "<< setw(30) << gasType <<"| " << setw(30)<< "Price" << "| "<< endl;
    cout << "-----------------------------------------------------------------"<< endl;

    gasType="Regular";
    cout <<"| "<< setw(30) << gasType <<"| " <<"$"<< setw(29) << RegularPrice  << "| "<< endl;
    cout << "-----------------------------------------------------------------"<< endl;

    gasType="Midgrade";
    cout <<"| "<< setw(30) << gasType <<"| " <<"$"<< setw(29) << MidgradePrice  << "| "<< endl;
    cout << "-----------------------------------------------------------------"<< endl;

    gasType="Premium";
    cout <<"| "<< setw(30) << gasType <<"| " <<"$"<< setw(29) << PremiumPrice  << "| "<< endl;
    cout << "-----------------------------------------------------------------"<< endl;

    gasType="Diesel";
    cout <<"| "<< setw(30) << gasType <<"| " <<"$"<< setw(29) << DieselPrice  << "| "<< endl;
    cout << "-----------------------------------------------------------------"<< endl;
    //ask the user to select gas type, number of gallons that they would like to fill up
    gasType="";
    cout << "\nPlease Choose a gas type to fill up your car:";
    cin>>gasType;
    cout << "\nHow many gallons:";
    cin>>gallons;
    //Once you get all the information, you will multiply the gas price by the number of gallons 
    //that they requested to fill and then you will then output the total price for filling up gas
    //inbuilt compare function of string is used
    if (gasType.compare("Regular") == 0)
    {
        pricePerGallon = RegularPrice;
    }
    else if (gasType.compare("Midgrade") == 0)
    {
        pricePerGallon = MidgradePrice;
    }
    else if (gasType.compare("Premium") == 0)
    {
        pricePerGallon = PremiumPrice;
    }
    else if (gasType.compare("Diesel") == 0)
    {
        pricePerGallon = DieselPrice;
    }
    else
    {
        cout << "\nThe Gas Type that you have chosen is not a valid one. Please try again.";
        exit(0); //if error exit program
    }
    //calculate the gas price by gallons by sales tax to come up with the total value.
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places
    cout<<"\nYour Selection of gas type is "<<gasType << " and number of gallons are "<<gallons;
    cout<<"\nYour total gas price is : $"<<gallons*pricePerGallon;
    cout<<"\nYour total sales tax on gas with the rate of "<<SalesTax*100<<"% per gallon is : $"<<gallons*pricePerGallon*SalesTax;
    cout<<"\nYour total value/price including sales tax is : $"<<gallons*pricePerGallon+gallons*pricePerGallon*SalesTax;
    //ask the user for the payment method that they would like to settle the transaction, 
    //which can be credit card, debit card, gift card or cash.
    cout<<"\nHow would you like to pay for it?"; 
    cout<<"\nDebit Card (DC), Credit Card (CC), Gift Card (GC) or Cash (CA): ";
    cin.ignore(); //line clears orignores the newline from the stream.
    getline(cin, payType); // input can have blank spaces in the string
    if (payType.compare("DC") == 0 || payType.compare("Debit Card") == 0)
    {
        payType="Debit Card";
    }
    else if (payType.compare("CC") == 0 || payType.compare("Credit Card") == 0)
    {
        payType="Credit Card";
    }
    else if (payType.compare("GC") == 0 || payType.compare("Gift Card") == 0)
    {
        payType="Gift Card";
    }
    else
    {
        payType="Cash";
    }
    cout<<"\nGreat! You have paid the balance of $"<< gallons*pricePerGallon+gallons*pricePerGallon*SalesTax;
    cout<<" using your ("<<payType<<").";
    cout<<"\nThank you for filling up gas at "<<stationName<<"!.\n";
    cout << endl;
	return 0;
}
