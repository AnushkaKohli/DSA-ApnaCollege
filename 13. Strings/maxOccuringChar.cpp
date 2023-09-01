#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    char maxFrequenceCharacter = 'a';
    int maxFrequency = 0;

    int frequencyOfEachChar[26] = {0};

    for (int i = 0; i < str.size(); i++)
        frequencyOfEachChar[str[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (frequencyOfEachChar[i] > maxFrequency)
        {
            maxFrequency = frequencyOfEachChar[i];
            maxFrequenceCharacter = i + 'a';
        }
    }

    cout << "Max Frequence Character: " << maxFrequenceCharacter << endl;
    cout << "Max Frequency: " << maxFrequency << endl;
    return 0;
}