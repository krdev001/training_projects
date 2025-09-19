#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cout << " Enter a characters = ";
    cin >> a 
        >> b 
        >> c ;
    cout << "ASCII values = ";
    cout << a << " = " << (int)a << endl
         << b << " = " << (int)b << endl
         << c << " = " << (int)c;

    return 0;
}