#include <iostream>
using namespace std;

int main()
{
    float number[5];
    cout << "enter five real number \n>>";
    cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
    
    for(int i = 0;i <= 3;i++)
        if(number[i] > number [i+1])
            number[i+1] = number[i]; 

    cout << "the biggest number = " << number[4];
}
