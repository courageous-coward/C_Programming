#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    string newpassword;
    
    cout << "enter the new password >> ";
    cin >> password;

    cout << "enter the new password again >> ";
    cin >> newpassword;

    if(password == newpassword)
        cout << "same";
    else
        cout << "not same";
}
