// WAP to count the number of ones in the binary representation of a given number

#include <iostream>
using namespace std;

int numberOfOnes(int number)
{
    int count = 0;
    while (number)
    {
        number = number & (number - 1);
        count++;
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Number of ones in " << number << " is " << numberOfOnes(number) << endl;
    return 0;
}