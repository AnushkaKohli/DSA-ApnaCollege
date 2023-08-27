#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(n^2)
// Worst Case: O(n^2)
// Average Case: O(n^2)
// Space Complexity: O(1)

void selectionSort(int size, int arr[])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
                swap(arr[i], arr[j]);
        }
    }
    return;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Elements before sorting: ";
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "Elements after sorting using selection sort: ";
    selectionSort(numOfElements, arr);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}