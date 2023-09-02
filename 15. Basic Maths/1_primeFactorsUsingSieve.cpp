#include <iostream>
using namespace std;

void primeFactors(int number)
{
    // spf[i] stores the smallest prime factor of i
    int spf[100];
    for (int i = 2; i <= number; i++)
        spf[i] = i;

    for (int i = 2; i <= number; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= number; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }

    while (number != 1)
    {
        cout << spf[number] << " ";
        number = number / spf[number];
    }
    return;
}

int main()
{
    int number;
    cout << "Enter the number to find the prime factors: ";
    cin >> number;

    cout << "Prime factors of " << number << " are: ";
    primeFactors(number);
    return 0;
}