#include <iostream>

using namespace std;

int Result, SecondNumber, FirstNumber, comparation;


void addition()
{

    cin >> comparation;
    cout << " " << endl;
    for(SecondNumber = 1; Result <= comparation; Result = SecondNumber + FirstNumber)
    {
        cout << Result << endl;
        FirstNumber = SecondNumber;
        SecondNumber = Result;      
        
    } 
}
int main()
{
    cout << "please enter the last number that you would like to now of Fibonacci Secuency" << endl;
    cout << " " << endl;
    addition();
}