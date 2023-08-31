#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "hElLo WoRlD";
    cout << 'a' - 'A' << endl;

    // Convert to upper case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << "Upper Case: " << str << endl;

    // Convert to lower case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << "Lower Case: " << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Upper Case using transform: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lower Case using transform: " << str << endl;
    return 0;
}