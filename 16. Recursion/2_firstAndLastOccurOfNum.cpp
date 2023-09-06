// Find the first and last occurence of a number in an array using recursion

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int i, int key)
{
    // First we are checking for i and then calling the function recursively for other values of i
    if (i == size)
        return -1;
    if (arr[i] == key)
        return i;
    return firstOccurence(arr, size, i + 1, key);
}

int lastOccurence(int arr[], int size, int i, int key)
{
    // We are first calling the function for i+1 and then checking for i
    if (i == size)
        return -1;
    int ansFromRestArray = lastOccurence(arr, size, i + 1, key);
    if (ansFromRestArray != -1)
        return ansFromRestArray;
    if (arr[i] == key)
        return i;
    return -1;
}

int main()
{
    int size, arr[20], num;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter the number whose first and last occurence you want to find: ";
    cin >> num;
    cout << "The first occurence of " << num << " is at index: " << firstOccurence(arr, size, 0, num) << " and the last occurence is at index: " << lastOccurence(arr, size, 0, num) << endl;
    return 0;
}