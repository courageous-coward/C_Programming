#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[100], longest[100];
    int length = 0;
    cout << "enter 5 names separated by ';'\n>>";

    for(int i = 1; i <= 5; i++)
    {
        cin.getline(names, 100, ';');
        
        cout << i << " : " << names << '\n';

        if(strlen(names) > length)
        {
            length = strlen(names);
            strcpy_s(longest, names);
        }
    }
    cout << "the longest name is " << longest;
}
