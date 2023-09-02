// GCD of two numbers is the largest number that divides both of them.
// gcd(a,b) = gcd(b,a%b)

#include <iostream>
#include <algorithm>
using namespace std;

int gcdEuclid(int num1, int num2)
{
    int greaterNum = max(num1, num2);
    int lesserNum = min(num1, num2);
    while (lesserNum != 0)
    {
        int remainder = greaterNum % lesserNum;
        greaterNum = lesserNum;
        lesserNum = remainder;
    }
    return greaterNum;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcdEuclid(num1, num2) << endl;
    return 0;
}
