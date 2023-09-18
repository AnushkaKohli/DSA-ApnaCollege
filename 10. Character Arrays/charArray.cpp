#include <iostream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter a string: ";
    cin >> arr;
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    cout << "You entered: " << arr << endl;
    return 0;
}