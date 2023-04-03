#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char elemarit[100];
    char operation;
    int a,b;

    while(true)
    {
        cout << "? ";
        
        cin.getline(elemarit, 100, ' ');
        a = atoi(elemarit);
    
        cin >> operation;
    
        cin >> elemarit;
        b = atoi(elemarit);

        if(operation == '+')
            cout << a << ' ' << operation << ' ' << b << " = " << a + b << endl;
        else if(operation == '-')
            cout << a << ' ' << operation << ' ' << b << " = " << a - b << endl;
        else if(operation == '*')
            cout << a << ' ' << operation << ' ' << b << " = " << a * b << endl;
        else if(operation == '/')
            cout << a << ' ' << operation << ' ' << b << " = " << a / b << endl;
        else if(operation == '%')
            cout << a << ' ' << operation << ' ' << b << " = " << a % b << endl;
    }
}