#include<iostream>
using namespace std;

int main()
{
    float volume, length, breadth, height;

    cout<<"Enter the value of length= ";
    cin>> length;

    cout<< "Enter the value of the breadth= ";
    cin>> breadth;

    cout<<"Enter the value of the height= ";
    cin>> height;

    volume= length* breadth* height;
    cout<<"Volume of the Cuboid is:  "<<volume;

    return 0;
}