#include <iostream>
using namespace std;

// Time Complexity:
// Best Case: O(nlogn)
// Worst Case: O(nlogn)
// Average Case: O(nlogn)
// Space Complexity: O(n)
void merge(int arr[], int left, int mid, int right)
{
    // Size of left and right subarray
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    // Create temp arrays
    int leftArr[leftSize], rightArr[rightSize];
    for (int i = 0; i < rightSize; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < rightSize; i++)
        rightArr[i] = arr[mid + 1 + i];
    // Merge temp arrays back into arr[left..right] with pointers i and j for array leftArr and rightArr respectively and k for the actual array arr
    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize)
    {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }
    // Copy the remaining elements of leftArr[], if there are any
    while (i < leftSize)
        arr[k++] = leftArr[i++];
    // Copy the remaining elements of rightArr[], if there are any
    while (j < rightSize)
        arr[k++] = rightArr[j++];
}

void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
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
    cout << "Elements after sorting using merge sort: ";
    mergeSort(arr, 0, numOfElements - 1);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}