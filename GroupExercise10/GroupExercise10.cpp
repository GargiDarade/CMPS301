// C++ implementation of GroupExercise 10 restaurant app 
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <string> // for string and to_string()
#include <iomanip>
using namespace std;

//display the heading that will contain the name of the food items and price
//by using settw,setfill and left alignmnet
//you can edit if you would like to change data
void printItems(string itemNames[],double itemPrices[],int arraySize)
{
    cout << left; 
    cout << endl;
    cout << setfill('-'); 
    cout << setw(29)<<""<<"Welcome to Shihan Restaurant";
    cout << setw(29)<<""<< endl;;
    //print header    
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << "Item" <<"| " << " " << setw(40)<< "Price" << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    //print movies
    for(int i=0;i<arraySize;i++)
    {
        cout << setfill(' '); 
        //index is used to print movie number
        cout <<"| "<< setw(40) << to_string(i+1) + ") " + itemNames[i] <<"| " << "$" << setw(40)<< itemPrices[i] << "| "<< endl;
        cout << setfill('-'); 
        cout << setw(85)<<""<< endl;
    }
    cout << setfill(' '); //reset fill to blank
}

//you can edit if you would like to change data
void fillItemsInfo(string itemNames[],double itemPrices[],int arraySize)
{
    int index=0; //start from first element
    if(index<arraySize)
    {
        itemNames[index]="Burger";
        itemPrices[index]=5;
    }
    index = index + 1; //go to the next element
    if(index<arraySize)
    {
        itemNames[index]="TURKEY, BACON & AVOCADO";
        itemPrices[index]=11.99;
    }
    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="GRILLED CHICKEN SANDWICH";
        itemPrices[index]=10.5;
    }

    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="FISH & CHIPS";
        itemPrices[index]=15;
    }
    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="Pie";
        itemPrices[index]=3.99;
    }
    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="ICE CREAM";
        itemPrices[index]=2.50;
    }
    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="COOKIES";
        itemPrices[index]=0.99;
    }
    index = index + 1;
    if(index<arraySize)
    {
        itemNames[index]="Cup of Fresh Fruit";
        itemPrices[index]=2.99;
    }

}


// starting function/Driver code
int main()
{
    const int NUMBER_OF_ITEMS = 8; //items in Restaurant, this is used as size of parallel arrays
    //Parallel Arrays
    string ItemNames[NUMBER_OF_ITEMS];  //to store item names
    double ItemPrices[NUMBER_OF_ITEMS]; //to store item price
    int itemIndex,quantity;
    char anythingElse;
    bool loop=true;
    double total;

    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places

    //this call fills array with the menu Items and price
    //note in C++ by default array are passed as reference 
    fillItemsInfo(ItemNames,ItemPrices,NUMBER_OF_ITEMS);

    //this  call display's menu
    printItems(ItemNames,ItemPrices,NUMBER_OF_ITEMS);

    //If the user chooses Y, then repeat the questions, 
    //but if the user chooses N, 
    //then calculate the total price and display the total price

    total=0; // initial total starts from 0
    //note initial value of loop is true
    while(loop)
    {
        cout << "\nWhat would you like to order (enter Index): ";
        cin>>itemIndex;
        if(itemIndex<1 || itemIndex>NUMBER_OF_ITEMS)
        {
            cout << "\nEntered item index is not valid, try again! ";
            return 0;
        }
        cout << "\nQuantity of the order:";        
        cin>>quantity;
        if(quantity<=0)
        {
            cout << "\nEntered quantity is not valid it has to be greater than zreo, try again! ";
            return 0;
        }

        total=total + ItemPrices[itemIndex-1]*quantity; //running total of order
        cout << "\nAnything Else (Y/N):";
        cin>>anythingElse;
        if(!(anythingElse=='Y' || anythingElse=='y'))
        {
            loop=false;
        }
    }
    
    //display the total price
    cout<<"\nYour total is $"<<total;

    cout<<"\nThank you for dining with Shihan!";
    cout << endl;
	return 0;

}
