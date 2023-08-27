#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(n)
// Worst Case: O(n^2)
// Average Case: O(n^2)
// Space Complexity: O(1)

void insertionSort(int size, int arr[])
{
    for (int step = 1; step < size; step++)
    {
        int keyToBeInserted = arr[step];
        int comparingIndex = step - 1;
        // Compare key with each element on the left of it until an element smaller than it is found
        while (comparingIndex >= 0 && arr[comparingIndex] > keyToBeInserted)
        {
            arr[comparingIndex + 1] = arr[comparingIndex];
            comparingIndex--;
        }
        // Place key at after the element just smaller than it
        arr[comparingIndex + 1] = keyToBeInserted;
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
    cout << "Elements after sorting using insertion sort: ";
    insertionSort(numOfElements, arr);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}