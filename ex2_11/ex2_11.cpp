#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cout << "enter two numbers \n>>";
    cin >> a >> b;

    if(a < b)
        cout << "bigger number = " << b;
    else
        cout << "bigger number = " << a;
}
