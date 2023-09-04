// To get the sum of the first n number using recursion.

#include <iostream>
using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)
int sum(int number)
{
    if (number == 1)
        return 1;
    return (number + sum(number - 1));
}

int main()
{
    int number;
    cout << "Enter the number for which you want to find the sum of first n natural numbers: ";
    cin >> number;

    cout << "The sum of first " << number << " natural numbers is " << sum(number) << endl;
    return 0;
}