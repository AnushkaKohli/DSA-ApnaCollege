#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
        fact *= i;
    return fact;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans = factorial(num);
    cout << "Factorial of " << num << " is " << ans << endl;
    return 0;
}