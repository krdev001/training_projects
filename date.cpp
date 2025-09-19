#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string date_str;
    cout<<"Enter date in DD/MM/YYYY format: ";
    cin>> date_str;

    if(date_str.length()!= 10|| date_str[2]!='/' || date_str[5]!='/'){
        cout<<"Invalid date format. please use DD/MM/YYYY."<<endl;
        return 1;
    }

    string day = date_str.substr(0,2);
    string month = date_str.substr(3,2);
    string year = date_str.substr(6,4);

    cout<<"Day-"<<day<<",Month-"<<month<<",Year-"<<year<<endl;
    return 0;

}
