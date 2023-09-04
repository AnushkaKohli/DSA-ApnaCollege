#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)
int factorial(int number)
{
    if (number == 0)
        return 1;
    return (number * factorial(number - 1));
}

int main()
{
    int number;
    cout << "Enter the number to find the factorial of: ";
    cin >> number;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}