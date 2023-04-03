#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char buf[10000];
    int count = 0, numbercount = 0;
    
    cout << "enter text. draw a histogram.\nend of text is ';'. you can enter text up to 10,000.\n";
    cin.getline(buf, 100000, ';');

    for(int i = 0; i < strlen(buf); i++)
    {
        if(isalpha(buf[i]) != 0)
        {
            buf[i] = tolower(buf[i]);
            count += 1;
        }
    }
    cout << "number of alphabet is " << count << "\n\n";

    for(char alpha = 'a'; alpha <= 'z'; alpha++)
    {
        numbercount = 0;
        for(int j = 0; j < strlen(buf); j++)
        {
            if(buf[j] == alpha)
            {
                numbercount += 1;
            }
        }
        cout << alpha << " (" << numbercount << ")\t: ";
        for(int k = 1; k <= numbercount; k++)
            cout << '*';
        cout << '\n';
    }
}