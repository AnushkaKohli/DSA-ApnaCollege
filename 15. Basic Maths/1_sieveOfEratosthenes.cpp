// Finding primes in Range [1:n]

#include <iostream>
#include <math.h>
using namespace std;

// Naive Approach
// Time Complexity: O(n*sqrt(n))
// Space Complexity: O(1)
bool checkPrime(int number)
{
    for (int i = 0; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
void getPrimesTilln(int endRange)
{
    for (int i = 2; i <= endRange; i++)
    {
        if (checkPrime(i))
            cout << i << " ";
    }
}

// Using Sieve of Eratosthenes
// Time Complexity: O(n*log(log(n)))
// Space Complexity: O(n)
void printAllPrimesInRange(int endRange)
{
    int isPrime[50] = {0};
    for (int i = 2; i <= endRange; i++)
    {
        if (isPrime[i] == 0)
        {
            for (int j = i * i; j <= endRange; j += i)
                isPrime[j] = 1;
        }
    }
    for (int i = 2; i <= endRange; i++)
    {
        if (isPrime[i] == 0)
            cout << i << " ";
    }
}

int main()
{
    int endRange;
    cout << "Enter the end range to print the prime factors: ";
    cin >> endRange;
    printAllPrimesInRange(endRange);
    return 0;
}