#include <iostream>
using namespace std;

int getMax(int size, int arr[])
{
    int maximumElement = arr[0];
    for (int i = 1; i < size; i++)
        maximumElement = max(maximumElement, arr[i]);
    return maximumElement;
}

void countSort(int size, int arr[], int place)
{
    int output[size], count[10] = {0};
    int maximumElementOfGivenPlace = arr[0] / place % 10;
    for (int i = 1; i < size; i++)
        maximumElementOfGivenPlace = max(maximumElementOfGivenPlace, arr[i] / place % 10);
    // count the number of times each element appears in the array
    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;
    // cumulative count
    for (int i = 1; i <= maximumElementOfGivenPlace; i++)
        count[i] += count[i - 1];
    // place the elements in sorted order
    for (int i = size - 1; i >= 0; i--)
        output[--count[(arr[i] / place) % 10]] = arr[i];
    // copy the sorted elements into original array
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixSort(int size, int arr[])
{
    int maximumElement = getMax(size, arr);
    for (int place = 1; maximumElement / place > 0; place *= 10)
        countSort(size, arr, place);
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
    cout << "Elements after sorting using radix sort: ";
    radixSort(numOfElements, arr);
    for (int i = 0; i < numOfElements; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}