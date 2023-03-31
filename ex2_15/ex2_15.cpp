#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char quit[100];
    while(strcmp(quit, "yes") != 0)
    {
        cout << "if you want to quit enter yes >> ";
        cin.getline(quit, 100);
    }
    cout << "quit...";
}
