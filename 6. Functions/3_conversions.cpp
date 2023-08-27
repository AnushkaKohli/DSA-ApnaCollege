#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0, base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += lastDigit * base;
        base *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0, base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += lastDigit * base;
        base *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string hex)
{
    int ans = 0, base = 1;
    int size = hex.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            ans += (hex[i] - '0') * base;
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            ans += (hex[i] - 'A' + 10) * base;
        base *= 16;
    }
    return ans;
}

int decimalToBinary(int n)
{
    // int ans = 0, base = 1;
    // while (n > 0)
    // {
    //     int remainder = n % 2;
    //     ans += remainder * base;
    //     base *= 10;
    //     n /= 2;
    // }
    int ans = 0, base = 1;
    while (base <= n)
        base *= 2;
    base /= 2;
    while (base > 0)
    {
        int lastDigit = n / base;
        n -= lastDigit * base;
        base /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

int decimalToOctal(int n)
{
    int ans = 0, base = 1;
    while (n > 0)
    {
        int remainder = n % 8;
        ans += remainder * base;
        base *= 10;
        n /= 8;
    }
    return ans;
}

string decimalToHexadecimal(int n)
{
    string ans = " ";
    while (n > 0)
    {
        int remainder = n % 16;
        if (remainder < 10)
            ans += to_string(remainder);
        else
        {
            char hexChar = remainder - 10 + 'A';
            ans += hexChar;
        }
        n /= 16;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int num, choice;
    string hex;
    do
    {
        cout << "Enter a choice: \n1. Convert binary to decimal\n2. Convert octal to decimal\n3. Convert hexadecimal to decimal\n4. Convert decimal to binary\n5. Convert decimal to octal\n6. Convert decimal to hexadecimal\n7. Exit\n";
        cin >> choice;
        if (choice == 3)
        {
            cout << "Enter a hexadecimal number: ";
            cin >> hex;
        }
        else if (choice >= 1 && choice <= 6)
        {
            cout << "Enter a number: ";
            cin >> num;
        }

        switch (choice)
        {
        case 1:
            cout << "The decimal equivalent of " << num << " is " << binaryToDecimal(num) << endl;
            break;
        case 2:
            cout << "The decimal equivalent of " << num << " is " << octalToDecimal(num) << endl;
            break;
        case 3:
            cout << "The decimal equivalent of " << hex << " is " << hexadecimalToDecimal(hex) << endl;
            break;
        case 4:
            cout << "The binary equivalent of " << num << " is " << decimalToBinary(num) << endl;
            break;
        case 5:
            cout << "The octal equivalent of " << num << " is " << decimalToOctal(num) << endl;
            break;
        case 6:
            cout << "The hexadecimal equivalent of " << num << " is " << decimalToHexadecimal(num) << endl;
            break;
        case 7:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice.";
        }
    } while (choice != 7);

    return 0;
}