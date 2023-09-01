// WAP to check if a given number is power of 2

#include <iostream>
using namespace std;

// Numbers which are power of 2 have only 1 set bit and n-1 will have all set bits after that position
// On performing and operation, we get 0 if the number is power of 2
// && is used to check if the number is not 0
// Eg. 8 = 1000, 7 = 0111, 8 & 7 = 0000
bool isPowerOf2(int number)
{
    return (number && !(number & (number - 1)));
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPowerOf2(number))
        cout << "Yes, " << number << " is a power of 2" << endl;
    else
        cout << "No, " << number << " is not a power of 2" << endl;
    return 0;
}