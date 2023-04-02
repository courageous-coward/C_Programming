#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char coffee[100];
    int number,money,won = 0;

    cout << "espresso is 2000 won, americano is 2300 won, cappuccino is 2500 won.\n";

    while(true)
    {
        cout << "order>> ";
        cin >> coffee >> number;

        if(strcmp(coffee, "espresso") == 0)
        {
            money = 2000*number;
            won = won + 2000*number;
        }
        else if(strcmp(coffee, "americano") == 0)
        {
            money = 2300*number;
            won = won + 2300*number;
        }
        else if(strcmp(coffee, "cappuccino") == 0)
        {
            money = 2500*number;
            won = won + 2500*number;
        }
        
        cout << "it's " << money << " won. enjoy your meal\n";
        
        if(won >= 20000)
        {
            cout  << "we close the caffee by selling " << won << " won today. see you again~~~" << endl;
            break;
        }
    }
}