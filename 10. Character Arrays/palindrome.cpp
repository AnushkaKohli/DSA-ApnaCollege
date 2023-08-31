#include <iostream>
using namespace std;

bool isPalindrome(int size, char arr[])
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
            return false;
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter size of string: ";
    cin >> size;
    char arr[size + 1];
    cout << "Enter a string: ";
    cin >> arr;
    if (isPalindrome(size, arr))
        cout << "The string '" << arr << "' is a palindrome.";
    else
        cout << "The string '" << arr << "' is not a palindrome.";
    return 0;
}