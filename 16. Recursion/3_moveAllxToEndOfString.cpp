// "axxbdxcefxhix" -> "abdcefhixxxxx"

#include <iostream>
using namespace std;

// Time complexity: O(n^2) because s.substr(i) takes O(n) time and it is called n times.
// Space complexity: O(n^2) because s.substr(i) gives a string of O(n) size and is called n times.
string moveAllx(string s)
{
    if (s.length() == 0)
        return "";
    char ch = s[0];
    string ans = moveAllx(s.substr(1));
    if (ch == 'x')
        return (ans + ch);
    else
        return (ch + ans);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "String after moving all x's to end: " << moveAllx(s) << "\n";
    return 0;
}