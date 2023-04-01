#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "name?";
    getline(cin, name);
    
    string address;
    cout << "address??";
    getline(cin, address);
    
    string age;
    cout << "age?";
    getline(cin, age);

    cout << name << ", "<< address << ", " << age << endl;
}
