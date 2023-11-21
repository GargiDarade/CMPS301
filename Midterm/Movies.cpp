// C++ implementation of MidTerm Movies app
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <string> // for string and to_string()
#include <iomanip>
using namespace std;

//display the heading that will contain the name of the
//movie theater and a list of movies that are being viewed including the times when
//the movie starts.
//by using settw,setfill and left alignmnet
//you can edit if you would like to change movies data
void printMovies(string movNms[],string movTms[],int arraySize)
{
    cout << left; 
    cout << endl;
    cout << setfill('*'); 
    cout << setw(28)<<""<<"Welcome to Cinemark Theaters";
    cout << setw(29)<<""<< endl;;
    //print header    
    cout << setfill(' '); 
    cout <<"| "<< setw(40) << "Movie" <<"| " << setw(40)<< "Time" << "| "<< endl;
    cout << setfill('-'); 
    cout << setw(85)<<""<< endl;

    //print movies
    for(int i=0;i<arraySize;i++)
    {
        cout << setfill(' '); 
        //index is used to print movie number
        cout <<"| "<< setw(40) << to_string(i+1) + ") " + movNms[i] <<"| " << setw(40)<< movTms[i] << "| "<< endl;
        cout << setfill('-'); 
        cout << setw(85)<<""<< endl;
    }
    cout << setfill(' '); //reset fill to blank
}

//checks string is number or not
bool isNumeric(string str) 
{
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; // even when one non numeric value is found, return false
      return true;
}

//returns index if name of movie is valid, else it will return -1 if not found
// movie name can be complete name of movie or indix of movie 
int getMovieIndex(string movieName,string MovieNames[],int noOfMovies)
{
    int index = -1; 
    //first check if index is provieded if so chech for valid index
    // else check valid movie name is provided, if valid movie name return index of it 
    // else return -1 as an error in the movie name.
    if(isNumeric(movieName) )
    {
        index =stoi(movieName);
        if(index>0 && index<=noOfMovies)
        {
            index = index-1; //array index starts from zero
        }
        else
        {
            index =-1; // name is number but not valid index
        }
    }
    else
    {
        //check for valid movie name
        for(int i=0;i<noOfMovies;i++)
        {
            if (MovieNames[i].compare(movieName) == 0)
            {
                index = i; //name of movie is valid name
            }
        }
    }
    return index;
}

//this function check entered time is valid or not for movie
//if valid time, it will return 1 If the movie is scheduled before 5:00 PM
//if valid time but not before 5 PM it will return 0
//if time is not valid it will return -1 
int validateMovieTime(string movieTime, string movTms)
{
    int isValidTm=-1; //dfault not found
    string pmAm="PM";
    //check for valid time
    size_t found = movTms.find(movieTime);
    if (found != string::npos)
    {
        //found
        isValidTm=0;
        //check for scheduled before 5:00 PM
        found = movieTime.find(pmAm);
        if (found != string::npos)
        {
            //found PM string in time
            //remove PM from time string
             string sub = movieTime.substr(0, found);
            // Find position of ':' using find()
            int pos = sub.find(":");
            // Copy substring before pos
            string strHours = sub.substr(0, pos);
            int hrs;
            //convert string into int
            hrs =stoi(strHours);
            if(hrs<5)
            {
                isValidTm=1; //movie is scheduled before 5:00 PM
            }
        }
        else
        {
            //not found PM string in time means it is AM 
            //which is less then 5 PM
            isValidTm=1;
        }
    }

    return isValidTm;
}
void fillMovieInfo(string movNms[],string movTms[],int arraySize)
{
    int index=0; //start from first element
    if(index<arraySize)
    {
        movNms[index]="Five Nights at Freddy's";
        movTms[index]="12:35PM, 1:45PM, 3:10PM, 5:45PM";
    }
    index = index + 1; //go to the next element
    if(index<arraySize)
    {
        movNms[index]="Freelance";
        movTms[index]="4:15PM";
    }
    index = index + 1;
    if(index<arraySize)
    {
        movNms[index]="The Marvels";
        movTms[index]="2:00PM, 2:30PM, 3:00PM, 3:30PM";
    }

    index = index + 1;
    if(index<arraySize)
    {
        movNms[index]="Shutter Island";
        movTms[index]="12:35PM, 1:45PM, 3:15PM, 5:45PM";
    }
    index = index + 1;
    if(index<arraySize)
    {
        movNms[index]="Man of Steel";
        movTms[index]="12:15PM, 1:30PM, 3:15PM, 5:00PM";
    }
}
// starting function/Driver code
int main()
{
    const int NUMBER_OF_MOVIES = 5; //movies in Theaters, this is used as size of parallel arrays
    //Parallel Arrays
    string MovieNames[NUMBER_OF_MOVIES];
    string MovieTimes[NUMBER_OF_MOVIES];

    //this call fills array with the names and times of movies
    //note in C++ by default array are passed as reference 
    fillMovieInfo(MovieNames,MovieTimes,NUMBER_OF_MOVIES);

    //this  call display's movie info like name and movie time
    printMovies(MovieNames,MovieTimes,NUMBER_OF_MOVIES);

    int age;
    string mvoieName;
    string movieTime;
    char isBlockBuster;
    char isPremiumSeat;
    double total=0;
    bool before5PM=false;

    //get the data from user
    cout << "\nPlease Enter your age: ";
    cin >> age;
    cout << "\nPlease Enter the movie that you would like to watch(You can use either a number/index or name):\n";
    //cin >> mvoieName;
    cin.ignore(); //line clears orignores the newline from the stream.
    getline(cin, mvoieName);
    cout << "\nPlease Enter the time of the movie (Eg. 2:00PM): ";
    cin >> movieTime;
    cout << "\nIs the movie a blockbuster (y/n): ";
    cin >> isBlockBuster;
    cout << "\nDo you prefer premium seating (y/n): ";
    cin >> isPremiumSeat;
    /*
    The pricing rules are as follows:
    • For regular seating:
    • For children (age 12 and below): $5 per ticket.
    • For adults (age 13 to 59): $10 per ticket.
    • For seniors (age 60 and above): $7 per ticket.
    • For premium seating (regardless of age):
    • Add an additional $3 per ticket.
    Additionally, there are special conditions:
    • If the movie is scheduled before 5:00 PM, there is a $2 discount on each
    regular ticket.
    • If the movie is a blockbuster, there is an additional $5 surcharge per ticket.
    */
    
    //Validate entered movie name and get index in array
    int movieIndex=getMovieIndex(mvoieName,MovieNames,NUMBER_OF_MOVIES);
    if(movieIndex>-1)
    {
        //movie name is valid
        mvoieName=MovieNames[movieIndex]; //get proper movie name from array
        //validate entered time of movie
        int validMovieTime=validateMovieTime( movieTime, MovieTimes[movieIndex]);
        if(validMovieTime>-1)
        {
            if(validMovieTime==1)
            {
                before5PM=true;
            }
        }
        else
        {
            cout << "\nEntered movie time is not valid, try again! ";
            return 0;
        }

    }
    else
    {
        cout << "\nEntered movie name is not valid, try again! ";
        return 0;
    }

    //For regular seating:
    //For children (age 12 and below): $5 per ticket.
    //For adults (age 13 to 59): $10 per ticket.
    //For seniors (age 60 and above): $7 per ticket.
    if(age<=12)
    {
        total=5; //child
    }
    else if (age>12 && age<=59)
    {
        total=10; //adult
    } else
    {
        total=7; //senior
    }
    //Display the total price of the ticket
    cout<<"\nTotal cost for viewing "<< mvoieName <<" ";
    if(isPremiumSeat=='y' || isPremiumSeat=='Y')
    {
        //For premium seating (regardless of age) add an additional $3 per ticket.
        total = total + 3;
        cout << "with premium seating ";
    }
    else if( before5PM)
    {
        //If the movie is scheduled before 5:00 PM, 
        //there is a $2 discount on each regular ticket.
        total = total - 2;
    }
    if(isBlockBuster=='y' || isBlockBuster=='Y')
    {
        //movie is a blockbuster, there is an additional $5 surcharge per ticket.
        total = total + 5;
        cout <<  "and being a blockbuster movie ";
    }
    
     cout <<"is $"<< total;
    cout<<"\nThank you for visiting Cinemark Theaters!";
    cout << endl;
	return 0;
}