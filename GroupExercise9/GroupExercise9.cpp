// C++ implementation of GroupExercise 9 app Average Score Calculator
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <string> // for string and to_string()
#include <iomanip>
using namespace std;
//this function returns letter grade for average grades
string getGrade(int avg)
{
    string grade;
    switch (avg)
    {
        // defining range 97 to 100
        case 97 ... 100:
            grade="A+";
            break;
        case 93 ... 96:
             grade="A";
            break;
        case 90 ... 92:
             grade="A-";
            break;
        case 87 ... 89:
             grade="B+";
            break;
        case 83 ... 86:
             grade="B";
            break;
        case 80 ... 82:
             grade="B-";
            break;
        case 77 ... 79:
             grade="C+";
            break;
        case 73 ... 76:
             grade="C";
            break;
        case 70 ... 72:
             grade="C-";
            break;
        case 67 ... 69:
             grade="D+";
            break;
        case 63 ... 66:
             grade="C";
            break;
        case 60 ... 62:
             grade="C-";
            break;
        default:
            grade="F";
            break;
        }    
    return grade;
}
// starting function/Driver code
int main()
{
    string name, courseName,assignmentName;

     int index=0; //start from first element
    const int NUMBER_OF_SCORE = 10; //
    //Arrays
    int scores[NUMBER_OF_SCORE]; //to store score
    
    double qumSum;
    double avarage;
    
    //get data from user
    cout<<"\n   Welcome to Average Score Calculator!";
    cout << "\nPlease enter your name: ";
    getline(cin, name);

    cout << "\nEnter the course name: ";
    getline(cin, courseName);

    cout << "\nEnter 10 scores of the assignment that is out of 100:\n";
    for(int i=0;i<NUMBER_OF_SCORE;i++)
    {
        cin>>scores[i];
    }

    //Calculate the average score
    qumSum=0;
    for(int i=0;i<NUMBER_OF_SCORE;i++)
    {
        qumSum=qumSum+scores[i];
    }
    avarage=qumSum/NUMBER_OF_SCORE;

    //Determine letter grade using conditional statement


    //The average score of (assignment name) is __.__%, which is the letter grade of _____.
    cout << fixed; //outputs floating-point numbers in a fixed decimal format
    cout << setprecision(2); //formats the output of decimal numbers to two decimal places
    cout << "\nThe average score of "<<assignmentName<<" is "<<avarage<<"%, which is the letter grade of "<<getGrade(avarage)<<".";
    cout<<"\nThank you for using our calculator!";
    cout << endl;
    return 0;    
}