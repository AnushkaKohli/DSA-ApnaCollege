#include <iostream>
using namespace std;

// Time Complexity - O(n)
int linearSearch(int size, int arr[], int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int size, int arr[], int key)
{
    int left = 0, right = size - 1, mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int numOfElements, arr[10], key;
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;
    if (linearSearch(numOfElements, arr, key) == -1)
        cout << "Linear Search: Element " << key << " not found" << endl;
    else
        cout << "Linear Search: Element " << key << " found at index: " << linearSearch(numOfElements, arr, key) << endl;

    if (binarySearch(numOfElements, arr, key) == -1)
        cout << "Binary Search: Element " << key << " not found" << endl;
    else
        cout << "Binary Search: Element " << key << " found at index: " << binarySearch(numOfElements, arr, key) << endl;
    return 0;
}