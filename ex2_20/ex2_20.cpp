#include <iostream>
using namespace std;

int sum(int a, int b);

int sum(int a, int b)
{
    int k, res = 0;
    for(k = a; k <= b; k++)
    {
        res += k;
    }
    return res;
}

int main()
{
    int n = 0;
    cout << "enter the number of ends>>";
    cin >> n;
    cout << "the sum of 1 to " << n << " is " << sum(1, n);
}
