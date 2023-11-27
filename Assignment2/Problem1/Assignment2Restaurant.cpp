// C++ implementation of the Assignment 2 : Discovery Bay Golf and Country Club Restaurant
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <iomanip>
using namespace std;

//use of Setprecision(), Showpoint, Setw(), Setfill(), Left/Right Manipulators

//constant variables are used for price and restaurant name
//cannot be assigned value anywhere in the program
const double bayBurgerPrice=15;
const double TBAMealPrice=16;
const double GCSMealPrice=15.99;
const double FCMealPrice=16.5;

const double PDesertPrice=5;
const double IDesertPrice=3;
const double CODesertPrice=3;
const double FFDesertPrice=2.5;

const double SalesTax=0.05;
const string restaurantName="Discovery Bay Golf and Country Club";


// starting function/Driver code
int main()
{
   
    
    string meal;
    string desert;
    meal="Meal";
    double desertPrice;
    double mealPrice;
    
    //display the menu of meals and deserts
    //by using settw,setfill and left alignmnet
    cout << left; 
    cout << endl;
    cout << "************Welcome to "<<restaurantName<<" Restaurant*********"<< endl;
    cout << setfill(' '); 
    cout <<"| "<< setw(61) << meal <<"| " << setw(12)<< "Price" << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    meal="Discovery Bay Burger (B)";
    cout <<"| "<< setw(61) << meal <<"| " <<"$"<< setw(11) << bayBurgerPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    meal="TURKEY, BACON & AVOCADO (T)";
    cout <<"| "<< setw(61) << meal <<"| " <<"$"<< setw(11) << TBAMealPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    meal="GRILLED CHICKEN SANDWICH (C)";
    cout <<"| "<< setw(61) << meal <<"| " <<"$"<< setw(11) << GCSMealPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    meal="FISH & CHIPS (F)";
    cout <<"| "<< setw(61) << meal <<"| " <<"$"<< setw(11) << FCMealPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    desert="Desert";
    cout <<"| "<< setw(61) << desert <<"| " << setw(12) << "Price"  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    desert="Pie (P)";
    cout <<"| "<< setw(61) << desert <<"| " <<"$"<< setw(11) << PDesertPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    desert="ICE CREAM (I)";
    cout <<"| "<< setw(61) << desert <<"| " <<"$"<< setw(11) << IDesertPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    desert="COOKIES (CO)";
    cout <<"| "<< setw(61) << desert <<"| " <<"$"<< setw(11) << CODesertPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;

    desert="Cup of Fresh Fruit (FF)";
    cout <<"| "<< setw(61) << desert <<"| " <<"$"<< setw(11) << FFDesertPrice  << "| "<< endl;
    cout << "******************************************************************************"<< endl;
    //ask the user for the meal and desert that they would like to order.
    cout << "\nPlease Enter a Meal that you would like to order: ";
    cin>>meal;
    if (meal.compare("B") == 0)
    {
         meal="Discovery Bay Burger (B)";
         mealPrice=bayBurgerPrice;
    }
    else if (meal.compare("T") == 0)
    {
        meal="TURKEY, BACON & AVOCADO (T)";
        mealPrice=TBAMealPrice;
    }
    else if (meal.compare("C") == 0)
    {
        meal="GRILLED CHICKEN SANDWICH (C)";
        mealPrice=GCSMealPrice;
    }
    else if (meal.compare("F") == 0)
    {
       meal="FISH & CHIPS (F)";
       mealPrice=FCMealPrice;
    }
    else
    {
        cout << "\nThe Meal Type that you have chosen is not a valid one. Please try again.";
        exit(0); //if error exit program
    }

    cout << "\nPlease Enter a Desert that you would like to order:";
    cin>>desert;
    if (desert.compare("P") == 0)
    {
         desert="Pie (P)";
         desertPrice=PDesertPrice;
    }
    else if (desert.compare("I") == 0)
    {
        desert="ICE CREAM (I)";
        desertPrice=IDesertPrice;
    }
    else if (desert.compare("CO") == 0)
    {
        desert="COOKIES (CO)";
        desertPrice=CODesertPrice;
    }
    else if (desert.compare("FF") == 0)
    {
       desert="Cup of Fresh Fruit (FF)";
       desertPrice=FFDesertPrice;
    }
    else
    {
        cout << "\nThe Desert Type that you have chosen is not a valid one. Please try again.";
        exit(0); //if error exit program
    }

    //add the meal and desert to get the subtotal and then you will take the
    //subtotal and calculate the sales tax. From there, you will add the subtotal and
    //sales tax and then display the user the total value
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places
    //To force the output to show the decimal point and trailing zeros
    cout << showpoint;
    cout<<"\nYour Selection of meal is "<<meal << " and of desert is "<<desert;
    cout<<"\nYour total price of meal and desert is : $"<<mealPrice+desertPrice;
    cout<<"\nYour total sales tax on meal and desert with the rate of "<<SalesTax*100<<"% per order is : $"<<(mealPrice+desertPrice)*SalesTax;
    cout<<"\nYour total value/price including sales tax is : $"<<(mealPrice+desertPrice)+(mealPrice+desertPrice)*SalesTax;
    cout<<"\nYour total of $"<<(mealPrice+desertPrice)+(mealPrice+desertPrice)*SalesTax<<" this will go to member charge!";
    cout<<"\nThank you for dining with us at "<<restaurantName<<"!"; 
    cout << endl;
	return 0;
}
