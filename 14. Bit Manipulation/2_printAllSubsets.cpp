// WAP to generate all possible subsets of a given set

#include <iostream>
using namespace std;

void generateSubsets(char arr[], int size)
{
    for (int i = 0; i < (1 << size); i++)
    {
        for (int j = 0; j < size; j++)
        {
            /* The expression `if(i & (1<<j))` is checking if the jth bit of the binary representation of i is set or not. */
            if (i & (1 << j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int size;
    char arr[10];
    cout << "Enter the size of the set: ";
    cin >> size;
    cout << "Enter the elements of the set: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "The subsets of the given set are: " << endl;
    generateSubsets(arr, size);
    return 0;
}