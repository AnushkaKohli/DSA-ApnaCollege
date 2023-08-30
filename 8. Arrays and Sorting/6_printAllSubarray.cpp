#include <iostream>
using namespace std;

void printSubarrays(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];

    cout << "All subarrays are: " << endl;
    printSubarrays(numOfElements, arr);
    return 0;
}