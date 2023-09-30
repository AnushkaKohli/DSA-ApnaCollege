// Print all possible permuattions of a string
//                 ABC
//      /           |          \
//    BC,A         AC,B       AB,C
//   /    \       /    \     /    \
// C,AB  B,AC  C,BA  A,BC  B,CA  A,CB
//  |      |     |     |     |     |
// ABC    ACB   BAC   BCA   CAB   CBA

#include <iostream>
using namespace std;

// Time complexity: O(n*2^n)
// Space complexity: O(2^n)
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    // i is the index of character to be fixed in the string
    for (int i = 0; i < s.length(); i++)
    {
        char charToBeFixed = s[i];
        string restOfString = s.substr(0, i) + s.substr(i + 1);
        permutation(restOfString, ans + charToBeFixed);
    }
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The possible permutations are: " << endl;
    permutation(s, "");
    return 0;
}