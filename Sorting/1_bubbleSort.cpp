#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(n)
// Worst Case: O(n^2)
// Average Case: O(n^2)
// Space Complexity: O(1)

void bubbleSort1(int size, int arr[])
{
    int numOfStep = 1;
    while (numOfStep < size)
    {
        for (int i = 0; i < size - numOfStep; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        numOfStep++;
    }
    return;
}

void bubbleSort2(int size, int arr[])
{
    for (int step = 0; step < size - 1; step++)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
    }
    return;
}

void optimizedBubbleSort(int size, int arr[])
{
    for (int step = 0; step < size - 1; step++)
    {
        bool swapped = false;
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
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
    cout << "Elements after sorting using bubble sort: ";
    optimizedBubbleSort(numOfElements, arr);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}