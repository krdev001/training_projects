#include<iostream>
using namespace std;
//SI=P*R*T
int main()
{
    float P, R, T;
    float SI;

    cout << "Enter the value of P: ";
    cin >> P;

    cout << "Enter the value of R: ";
    cin >> R;

    cout << "Enter the vale of T: ";
    cin >> T;

     SI = P*R*T/100;  
     cout<<" The SI is:  "<<SI;

     return 0;


}