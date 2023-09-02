// Find the number of numbers in the interval [1,n] which are divisible by a or b.

#include <iostream>
using namespace std;

int divisible(int number, int divisor1, int divisor2)
{
    int divisibleByDivisor1 = number / divisor1;
    int divisibleByDivisor2 = number / divisor2;
    int divisibleByDivisor1AndDivisor2 = number / (divisor1 * divisor2);
    return (divisibleByDivisor1 + divisibleByDivisor2 - divisibleByDivisor1AndDivisor2);
}

int main()
{
    int number, divisor1, divisor2;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the first divisor: ";
    cin >> divisor1;
    cout << "Enter the second divisor: ";
    cin >> divisor2;
    cout << "The number of numbers in the interval [1," << number << "] which are divisible by " << divisor1 << " or " << divisor2 << " is " << divisible(number, divisor1, divisor2) << endl;
    return 0;
}