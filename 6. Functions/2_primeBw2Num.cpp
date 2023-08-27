// Print all the prime numbers between two given numbers.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}