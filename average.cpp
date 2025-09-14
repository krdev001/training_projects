#include<iostream>
using namespace std;


int main()
{
    
    int num1, num2, num3;
    float average;

    cout<< "Enter 1st  integers: ";
    cin>> num1;
    cout<< "Enter 2nd  integers: ";
    cin>> num2;
    cout<< "Enter 3rd4  integers: ";
    cin>> num3;

    average = (num1 + num2 + num3) / 3.0;

    cout<< "The average is:  "<< average << endl;

    return 0;
}