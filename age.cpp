#include<iostream>
using namespace std;
int main()
{
    int birth_year, current_year, age;
    cout<<"Enter your birth year: ";
    cin>>birth_year;

    cout<<"Enter the current year: ";
    cin>>current_year;

    age= current_year - birth_year;

    cout<<"Your age is: "<<age<<" years."<<endl;

    if (age<18){
        cout<<"You are a minor."<<endl;
    }
    else if(age>=18 && age<30){
        cout<<"You are a teenage."<<endl;
    }
    else if(age>=30 && age<60){
        cout<<"You are an adult."<<endl;
    }
    else{
        cout<<"You are a senior."<<endl;
    }

    return 0;
}
