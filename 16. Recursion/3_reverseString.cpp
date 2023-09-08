#include <iostream>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(n^2)
void reverseString(string s)
{
    if (s.length() == 0)
        return;
    string restOfString = s.substr(1);
    reverseString(restOfString);
    cout << s[0];
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    reverseString(s);
    return 0;
}