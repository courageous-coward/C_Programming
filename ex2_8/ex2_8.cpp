#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main()
{
    cout << "rock scissors paper." << "enter from rock, scissors, paper";

    cout << "romio>>";
    string r;
    cin >> r;

    cout << "juliet>>";
    string j;
    cin >> j;

    if((r == "rock" && j == "scissors") || (r == "scissors" && j == "paper") || (r == "paper" && j == "rock"))
        cout << "romio win.";
    else if((r == "rock" && j == "paper") || (r == "scissors" && j == "rock") || (r == "paper" && j == "scissors"))
        cout << "juliet win.";
    else if(r == j)
        cout << "tie.";
}
