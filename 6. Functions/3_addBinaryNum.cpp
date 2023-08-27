#include <iostream>
using namespace std;

int reverse(int n)
{
    int reversedNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n /= 10;
    }
    return reversedNum;
}

int addBinary(int num1, int num2)
{
    int ans = 0, carry = 0;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 % 2 == 0 && num2 % 2 == 0)
        {
            ans = ans * 10 + carry;
            carry = 0;
        }
        else if (num1 % 2 == 1 && num2 % 2 == 1)
        {
            ans = ans * 10 + carry;
            carry = 1;
        }
        else
        {
            if (carry == 1)
            {
                ans = ans * 10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        num1 /= 10;
        num2 /= 10;
    }
    while (num1 > 0)
    {
        if (carry == 1)
        {
            if (num1 % 2 == 1)
            {
                ans = ans * 10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else
            ans = ans * 10 + (num1 % 2);

        num1 /= 10;
    }
    while (num2 > 0)
    {
        if (carry == 1)
        {
            if (num2 % 2 == 1)
            {
                ans = ans * 10 + 0;
                carry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else
            ans = ans * 10 + (num2 % 2);

        num2 /= 10;
    }

    if (carry == 1)
        ans = ans * 10 + 1;

    ans = reverse(ans);

    return ans;
}

int main()
{
    int num1, num2;
    cout << "Enter two binary numbers: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << addBinary(num1, num2) << endl;
    return 0;
}