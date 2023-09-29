// "aaaabbbeeecdddd" -> "abecd"

#include <iostream>
using namespace std;

string removeAllDuplicates(string s)
{
    if (s.length() == 0)
        return "";
    char ch = s[0];
    string ans = removeAllDuplicates(s.substr(1));
    if (ch == ans[0])
        return ans;
    else
        return (ch + ans);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "String after removing all duplicates: " << removeAllDuplicates(s) << "\n";
    return 0;
}