// Generate all substrings along with ASCII number
// For each character, we have two choices, either we include it or not.
// "AB"
//                    ""
//        /           |          \
//       A            65         ""
//   /   |   \    /   |   \    /  |  \
//  AB  A66  A  65B 6566  65  B  66  ""

#include <iostream>
using namespace std;

// Time complexity: O(3^n) because for each character, we have three choices, either we include it or not or add ascii value.
// Space complexity: O(3^n) because for each character, we have three choices, either we include it or not or add ascii value.
void subsequence(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string restOfString = s.substr(1);
    subsequence(restOfString, ans);
    subsequence(restOfString, ans + ch);
    subsequence(restOfString, ans + to_string(code));
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "All substrings of the string with given ASCII value are: \n";
    subsequence(s, "");
    return 0;
}