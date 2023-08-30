// Find whether there exist 2 numbers that sum to K.

#include <iostream>
using namespace std;

// Inserion Sort - O(n^2)
void sortElements(int size, int arr[])
{
    for (int step = 1; step < size; step++)
    {
        int key = arr[step], comparingIndex = step - 1;
        while (comparingIndex >= 0 && arr[comparingIndex] > key)
        {
            arr[comparingIndex + 1] = arr[comparingIndex];
            comparingIndex--;
        }
        arr[comparingIndex + 1] = key;
    }
}

// Using two pointers approach
//  Time complexity - O(n)
void pairTargetSum(int size, int arr[], int targetSum)
{
    sortElements(size, arr);
    cout << "Elements after sorting are: " << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    int left = 0, right = size - 1, currentSum = 0;
    while (left < right)
    {
        currentSum = arr[left] + arr[right];
        if (currentSum == targetSum)
        {
            cout << arr[left] << " + " << arr[right] << " = " << targetSum << " with positions " << left << " and " << right << endl;
            left++;
            right--;
        }
        else if (currentSum < targetSum)
            left++;
        else
            right--;
    }
    return;
}

int main()
{
    int numOfElements, arr[10], targetSum;
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];
    cout << "Enter the target sum: ";
    cin >> targetSum;

    pairTargetSum(numOfElements, arr, targetSum);
    return 0;
}