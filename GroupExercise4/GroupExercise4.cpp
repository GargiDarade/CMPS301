// C++ implementation of the Group Exercise 4
//Student Name: Gargi Darade
//Student ID: 11990396 
//Subject/Class: CMPS 301 Programming Concepts

#include <iostream>
//#include <iomanip>
#include <cmath>
using namespace std;

// starting function/Driver code
int main()
{

    cout << "-----------------------------------------------------------------------------------------"<< endl;
    cout << "solving operations by C++: -10 ÷ (20 ÷ 2² × 5 ÷ 5) × 8 - 2"<< endl;
    //C++ does not include an exponent operator
    cout <<"= "<<-10 / (20 / pow(2,2) * 5 / 5) * 8 - 2<< endl;
    cout <<"start: -10 / (20 / pow(2,2) * 5 / 5) * 8 - 2 (C++ does not include an exponent operator)"<< endl;
    cout <<"step 1: -10 / (20 / 4 * 5 / 5) * 8 - 2 (Evaluate pow(2,2) parentheses and function precedence, left to right associativity)"<< endl;
    cout <<"step 2: -10 / (5 * 5 / 5) * 8 - 2 (Evaluate 20 / 4 parentheses and division precedence, left to right associativity)"<< endl;
    cout <<"step 3: -10 / (25 / 5) * 8 - 2 (Evaluate 5 * 5 parentheses and Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 4: -10 / 5 * 8 - 2 (Evaluate (25 / 5) parentheses and division precedence, left to right associativity)"<< endl;
    cout <<"step 5: -2 * 8 - 2 (Evaluate -10 / 5 division precedence, left to right associativity)"<< endl;
    cout <<"step 6: -16 - 2 (Evaluate -2 * 8 Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 7: -18 (Evaluate -16 - 2 Subtraction precedence, left to right associativity)"<< endl;
    cout << "-----------------------------------------------------------------------------------------"<< endl;

    cout << "solving operations by C++: 10 × 4 - 2 × (4² ÷ 4) ÷ 2 ÷ 1/2 + 9"<< endl;
    //C++ does not include an exponent operator
    cout <<"= "<<10 * 4 - 2 * (pow(4,2) / 4) / 2 / (1.0/2) + 9<< endl;
    cout <<"start: 10 * 4 - 2 * (pow(4,2) / 4) / 2 / (1.0/2) + 9 (C++ does not include an exponent operator and Rule 1(b) for (1.0/2))"<< endl;
    cout <<"step 1: 10 * 4 - 2 * (16 / 4) / 2 / (1.0/2) + 9  (Evaluate pow(4,2) parentheses and function precedence, left to right associativity)"<< endl;
    cout <<"step 2: 10 * 4 - 2 * 4 / 2 / (1.0/2) + 9 (Evaluate 16 / 4 parentheses and division precedence, left to right associativity)"<< endl;
    cout <<"step 3: 10 * 4 - 2 * 4 / 2 / 0.5 + 9   (Evaluate 1.0/2 parentheses and division precedence, left to right associativity and Rule 1(b))"<< endl;
    cout <<"step 4: 40 - 2 * 4 / 2 / 0.5 + 9 (Evaluate 10 * 4 Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 5: 40 - 8 / 2 / 0.5 + 9 (Evaluate 2 * 4 Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 6: 40 - 4 / 0.5 + 9  (Evaluate 8 / 2 division precedence, left to right associativity)"<< endl;
    cout <<"step 7: 40 - 8 + 9  (Evaluate 4 / 0.5 division precedence, left to right associativity and Rule 1(b))"<< endl;
    cout <<"step 8: 32 + 9  (Evaluate 40 - 8 Subtraction precedence, left to right associativity)"<< endl;
    cout <<"step 9: 41  (Evaluate 32 + 9 Addition precedence, left to right associativity)"<< endl;
    cout << "-----------------------------------------------------------------------------------------"<< endl;

    cout << "solving operations by C++: 39 - (8 - 5)4 + 100 / 5"<< endl;
    //C++ does not include an exponent operator
    cout <<"= "<<39 - pow((8 - 5),4 ) + 100 / 5<< endl;
    cout <<"start: 39 - pow((8 - 5),4 ) + 100 / 5 (C++ does not include an exponent operator)"<< endl;
    cout <<"step 1: 39-pow(3,4)+100/5 (Evaluate (8 - 5) parentheses precedence, left to right associativity)"<< endl;
    cout <<"step 2: 39-81+100/5 (Evaluate pow(3,4) function precedence, left to right associativity)"<< endl;
    cout <<"step 3: 39-81+20    (Evaluate 100/5 division precedence, left to right associativity)"<< endl;
    cout <<"step 4: -42+20    (Evaluate 39-81 Subtraction precedence, left to right associativity)"<< endl;
    cout <<"step 5: -22    (Evaluate -42+20 Addition precedence, left to right associativity)"<< endl;
    cout << "-----------------------------------------------------------------------------------------"<< endl;
    cout << "solving operations by C++: 7 * (30 / 6 + 3) - 9 * (27 / 9)"<< endl;
    cout << "= "<<7 * (30 / 6 + 3) - 9 * (27 / 9)<< endl;

    cout <<"start: 7 * (30 / 6 + 3) - 9 * (27 / 9) "<< endl;
    cout <<"step 1: 7 * (5 + 3) - 9 * (27 / 9) (Evaluate (30 / 6 + 3) parentheses and division precedence, left to right associativity)"<< endl;
    cout <<"step 2: 7 * 8 - 9 * (27 / 9) (Evaluate (5 + 3) parentheses precedence, left to right associativity)"<< endl;
    cout <<"step 3: 7 * 8 - 9 * 3 (Evaluate (27 / 9) parentheses precedence, left to right associativity)"<< endl;
    cout <<"step 4: 56 - 9 * 3 (Evaluate 7 * 8 Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 5: 56 - 27 (Evaluate 9 * 3 Multiplication precedence, left to right associativity)"<< endl;
    cout <<"step 6: 29    (Evaluate 56 - 27 Subtraction precedence, left to right associativity)"<< endl;
    cout << "-----------------------------------------------------------------------------------------"<< endl;


    cout << ""<< endl;
	return 0;
}
