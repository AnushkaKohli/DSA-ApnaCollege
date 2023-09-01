#include <iostream>
using namespace std;

int longestWord(int size, char arr[])
{
    int currentLength = 0, maxLength = 0, i = 0, startOfNextWord = 0, maxWordStart = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            maxLength = max(maxLength, currentLength);
            maxWordStart = startOfNextWord;
            currentLength = 0;
            startOfNextWord = i + 1;
        }
        else
            currentLength++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << "The longest word in the sentence is: ";
    for (int j = 0; j < maxLength; j++)
        cout << arr[maxWordStart + j];
    cout << endl;
    return maxLength;
}

int main()
{
    int size;
    cout << "Enter size of the sentence: ";
    cin >> size;

    // This is used to ignore the newline character left in the input stream by the previous cin statement. If we don't use this, then the next cin.getline() will read the newline character as input.
    cin.ignore();

    char arr[size + 1];
    cout << "Enter a sentence: ";
    /* `cin.getline(arr, size);` is used to read a line of input from the user and store it in the character array `arr`. It takes two arguments - the first argument is the name of the character array where the input will be stored, and the second argument is the maximum number of characters to read from the input. */
    cin.getline(arr, size);
    cin.ignore();

    cout << "Length of the longest word in the sentence is: " << longestWord(size, arr) << endl;
    return 0;
}