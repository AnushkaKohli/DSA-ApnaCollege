#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(nlogn)
// Worst Case: O(n^2)
// Average Case: O(nlogn)
// Space Complexity: O(logn)
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int indexOfLastSmallerEle = low - 1; // Index of smaller element
    for (int iterator = low; iterator < high; iterator++)
    {
        if (arr[iterator] < pivot)
        {
            indexOfLastSmallerEle++;
            swap(arr[indexOfLastSmallerEle], arr[iterator]);
        }
    }
    swap(arr[indexOfLastSmallerEle + 1], arr[high]);
    return indexOfLastSmallerEle + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
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
    cout << "Elements after sorting using quick sort: ";
    quickSort(arr, 0, numOfElements - 1);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}