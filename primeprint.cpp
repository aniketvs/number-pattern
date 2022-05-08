#include <iostream>
#include <math.h>
using namespace std;

bool primeprinter(int n)
{
    

    for (int j = 2; j <=sqrt(n); j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }

    return true;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (primeprinter(i))
        {
            cout << i << endl;
        }

        return 0;
    }
}