#include <iostream>
using namespace std;

int main()
{
    int k, n = 0;
    int sum = 0;
    
    cout << "enter the number of ends >>";
    cin >> n;
    
    for(k = 1; k <= n; k++)
    {
        sum += k;
    }
    
    cout << "the sum of 1 to " << n << " is " << sum;
}
