#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;
    string food;
    cout << "***** Wellcome chinses restaurant *****\n";
    
    while(true)
    {
        cout << "jjamppong:1, jjajang:2, gunmandu:3, termination:4>>\t";
        cin >> number;
        
        if(number == 1)
            food = "jjamppong";
        else if(number == 2)
            food = "jjajang";
        else if(number == 3)
            food = "gunmandu";
        else if(number == 4)
        {
            cout << "it's closed today" << endl;
            break;
        }
        else
        {
            cout << "please order again" << endl;
            continue;
        }
        
        cout << "how many servings?";
        cin >> number;

        cout << "here is " << number << " of " << food << endl;
    }
}