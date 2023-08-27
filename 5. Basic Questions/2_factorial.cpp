// Write a program to find the factorial of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num, factorial = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num; i++)
        factorial *= i;
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}