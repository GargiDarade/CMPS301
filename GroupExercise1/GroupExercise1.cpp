// C++ implementation of the Group Exercise 1
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
#include <iomanip>
using namespace std;

// starting function/Driver code
int main()
{

    //only by using cout
    //cout << "-----------------------------Gargi's Schedule for Fall 2023-------------------------------"<< endl;
    //cout << "|  Dept    |   Number  |   Course Name            | Days  |  Time           |    Room    |"<< endl;
    //cout << "------------------------------------------------------------------------------------------"<< endl;
    //cout << "|  MUS     |   180     | Guitar Workshop          | Mo    |  6:45 - 8:30PM  |    Online  |"<< endl;
    //cout << "|  RCS     |   110     | College Writing A        | Tu    |  6:00 - 9:20PM  |    Online  |"<< endl;
    //cout << "|  PSY     |   101     | Principles of Psychology | Fr    |  6:45 - 8:30PM  |    Online  |"<< endl;
    //cout << "|  CMPS    |   301     | Programming Concepts     | Mo,We |  3:30 - 5:05PM  |    Online  |"<< endl;
    //cout << "|  MATH    |   105     | Precalculus              | Tu,Th |  1:45 - 3:30PM  |    Online  |"<< endl;
    //cout << "------------------------------------------------------------------------------------------"<< endl;

    //by using settw,setfill and left alignmnet
    string Dept,CNum,CName,Days,Time,Room;
    Dept="Dept";
    CNum="Number";
    CName="Course Name";
    Days="Days";
    Time="Time";
    Room="Room";

    cout << left; 
    cout << endl;
    cout << "-----------------------------Gargi's Schedule for Fall 2023------------------------------"<< endl;
    cout << setfill(' '); 
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;
    cout << "-----------------------------------------------------------------------------------------"<< endl;

    Dept="MUS";
    CNum="180";
    CName="Guitar Workshop";
    Days="Mo";
    Time="6:45 - 8:30PM";
    Room="Online";
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;

    Dept="RCS";
    CNum="110";
    CName="College Writing A";
    Days="Tu";
    Time="6:00 - 9:20PM";
    Room="Online";
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;

    Dept="PSY";
    CNum="101";
    CName="Principles of Psychology";
    Days="Fr";
    Time="6:45 - 8:30PM";
    Room="Online";
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;

    Dept="CMPS";
    CNum="301";
    CName="Programming Concepts";
    Days="Mo,We";
    Time="3:30 - 5:05PM";
    Room="Online";
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;

    Dept="MATH";
    CNum="105";
    CName="Precalculus";
    Days="Tu,Th";
    Time="1:45 - 3:30PM";
    Room="Online";
    cout <<"| "<< setw(9) << Dept <<"| " << setw(10) << CNum << "| " << setw(25) << CName<< "| " << setw(6) << Days<< "| " << setw(16) << Time<< "| " << setw(10) << Room << "|"<< endl;

    cout << "-----------------------------------------------------------------------------------------"<< endl;
    cout << ""<< endl;
	return 0;
}
