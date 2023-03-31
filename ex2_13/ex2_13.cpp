#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char sentence[100];
    cout << "enter the characters(less than 100).\n";
    cin.getline(sentence, 100, '\n');

    for(int i = 0; i <=100; i++)
    {
        if(sentence[i] == 'x')
            count++;
    }
    
    cout << "number of x is " << count;
}
