// C++ implementation of GroupExercise 8 app
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <string> // for string and to_string()
#include <iomanip>
using namespace std;

//cannot be assigned value anywhere in the program
const double tShirtPrice=35.00;
const double suitPrice=150.00;
const double mercedesBenzSClassPrice=150000.00;
const double beltPrice=10.50;
const double hoodiePrice=30.99;
string productType="Item";

//display the store name and product

//by using settw,setfill and left alignmnet
//you can edit if you would like to change product or using char to fill in the short letter of the product

void printStoreAndProducts()
{
    cout << left; 
    cout << endl;
    cout << setfill('*'); 
    cout << setw(25)<<""<<"Welcome to Defiant Law Group Store";
    cout << setw(26)<<""<< endl;;
    //print header    
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << setw(40)<< "Pricee" << " | "<< endl;
    cout << setfill('-'); 
    cout << setw(85)<<""<< endl;
    //print product data
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places
    productType="T-Shirt (T)";
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << "$" << setw(40)<< tShirtPrice << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    productType="Suit (S)";
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << "$"  << setw(40)<< suitPrice << "| "<< endl;
     cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    productType="Mercedes Benz S Class (M)";
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << "$"  << setw(40)<< mercedesBenzSClassPrice << "| "<< endl;
     cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    productType="Belt (B)";
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << "$"  << setw(40)<< beltPrice << "| "<< endl;
     cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    productType="Hoodie (H)";
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << productType <<"| " << "$"  << setw(40)<< hoodiePrice << "| "<< endl;
    cout << setfill('*'); 
    cout << setw(85)<<""<< endl;

    cout << setfill(' '); //reset fill to blank
}

// starting function/Driver code
int main()
{
    int quantity;
    double productPrice;
    double totalPrice;
    double discountPern=0;
    printStoreAndProducts();
    //get data from user
    cout<<"\nEnter the product that you would like to purchase: ";
    cin>>productType;
    if (productType.compare("T") == 0 || productType.compare("T-Shirt") == 0)
    {
        productType="T-Shirt";
        productPrice = tShirtPrice;
    } else if (productType.compare("S") == 0 || productType.compare("Suit") == 0)
    {
        productType="Suit";
        productPrice = suitPrice;
    } else if (productType.compare("M") == 0 || productType.compare("Mercedes Benz S Class") == 0)
    {
        productType="Mercedes Benz S Class";
        productPrice = mercedesBenzSClassPrice;
    } else if (productType.compare("B") == 0 || productType.compare("Belt") == 0)
    {
        productType="Belt";
        productPrice = beltPrice;
    } else if (productType.compare("H") == 0 || productType.compare("Hoodie") == 0)
    {
        productType="Hoodie";
        productPrice = hoodiePrice;
    }
    else
    {
        cout << "\nThe product type that you have chosen is not a valid one. Please try again.";
        exit(0); //if error exit program
    }

    cout<<"\nEnter the quantity: ";
    cin>>quantity;
    if(quantity<=0)
    {
        cout << "\nThe quantity has to be one or more. Please try again.";
        exit(0); //if error exit program
    }
    //Calculte the total price
    totalPrice=productPrice*quantity;
    //Determine if the total qualifies for the discount. If so, apply the discount
    
    //rules to determine if the user gets a discount:
    //If the purchase amount is greater than or equal to $100, a 10% discount is applied.
    //If the purchase amount is between $50 (inclusive) and $99.99 (inclusive), a 5% discount is applied.
    //If the purchase amount is less than $50, no discount is applied.
    if(totalPrice>=100)
    {
        discountPern=10;
    } else if(totalPrice>=50 && totalPrice<100)
    {
        discountPern=5;
    }
    // sub discount
    totalPrice = totalPrice - ((totalPrice*discountPern)/100);
    cout<< "\nFor the Product "<<productType;
    if(discountPern>0)
    {
        cout<< " you have a "<<discountPern<<"% discount.";
    }
    cout<< " your total is $"<<totalPrice;

    cout<<"\nThank you for visiting Defiant Law Group Store!";
    cout << endl;
    return 0;    
}