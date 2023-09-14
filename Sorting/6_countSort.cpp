#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(max + size)
// Worst Case: O(max + size)
// Average Case: O(max + size)
// Space Complexity: O(max)

void countSort(int size, int arr[])
{
    int output[size], count[10] = {0}, maximumElement = arr[0];
    // Finding the largest element in the array
    for (int i = 1; i < size; i++)
        maximumElement = max(maximumElement, arr[i]);
    // Counting the number of times each element occurs in the array
    for (int i = 0; i < size; i++)
        count[arr[i]]++;
    // Storing the cumulative count
    for (int i = 1; i <= maximumElement; i++)
        count[i] += count[i - 1];
    // Placing the elements in the output array
    for (int i = size - 1; i >= 0; i--)
        output[--count[arr[i]]] = arr[i];
    // Copying the output array to the original array
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
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
    cout << "Elements after sorting using count sort: ";
    countSort(numOfElements, arr);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}