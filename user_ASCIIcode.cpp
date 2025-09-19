#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << " Enter ASCII= ";
    cin >> a 
        >> b 
        >> c ;
    cout << "Characters = ";
    cout << a << " = " << (char)a << endl
         << b << " = " << (char)b << endl
         << c << " = " << (char)c;

    return 0;
}