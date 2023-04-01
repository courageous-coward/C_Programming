#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[100];
    
    cout << "write sentence>>";
    cin >> sentence;

    for(int i = 0; i < strlen(sentence); i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << sentence[j];
        }
        cout << '\n';
    }
}
