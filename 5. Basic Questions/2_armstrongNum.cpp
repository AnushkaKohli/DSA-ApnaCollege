// Armstrong number is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, lastDigit, sum = 0, originalNum;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    while (num > 0)
    {
        lastDigit = num % 10;
        sum += pow(lastDigit, 3);
        num /= 10;
    }
    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;
    return 0;
}