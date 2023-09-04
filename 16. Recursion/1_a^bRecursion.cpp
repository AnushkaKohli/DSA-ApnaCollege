// To calculate bth power of a i.e. a^b using recursion.

#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)
int calPower(int base, int power)
{
    if (power == 0)
        return 1;
    return (base * calPower(base, power - 1));
}

int main()
{
    int base, power;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;
    cout << "Result of " << base << "^" << power << " is: " << calPower(base, power) << endl;
    return 0;
}