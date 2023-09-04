#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)
int fibonacci(int number)
{
    if (number == 0 || number == 1)
        return number;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << "The element at position " << number << " in the fibonacci sequence is: " << fibonacci(number);
    return 0;
}