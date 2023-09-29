// Print all possible words from phone digits

#include <iostream>
using namespace std;

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string alphabets = keypadArr[ch - '0'];
    string restOfString = s.substr(1);
    for (int i = 0; i < alphabets.length(); i++)
    {
        keypad(restOfString, ans + alphabets[i]);
    }
}

int main()
{
    string s;
    cout << "Enter the keypad numbers: ";
    cin >> s;
    cout << "The possible words are: " << endl;
    keypad(s, "");
    return 0;
}