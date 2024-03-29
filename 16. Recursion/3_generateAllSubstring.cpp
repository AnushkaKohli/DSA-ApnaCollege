// Generate all substrings of a string
// For each character, we have two choices, either we include it or not.
// "ABC"
//                     ""
//              /              \   
//             A                ""
//         /       \        /       \
//        AB       A        B        ""
//      /   \    /   \    /   \    /    \
//     ABC  AB  AC    A  BC    B  C     ""

#include <iostream>
using namespace std;

// Time complexity: O(2^n) because for each character, we have two choices, either we include it or not.
// Space complexity: O(2^n) because for each character, we have two choices, either we include it or not.
void substring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string restOfString = s.substr(1);
    substring(restOfString, ans);
    substring(restOfString, ans + ch);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "All substrings of the string are: \n";
    substring(s, "");
    return 0;
}