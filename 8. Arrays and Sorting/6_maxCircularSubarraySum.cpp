#include <iostream>
#include <climits>
using namespace std;

int kadane(int size, int arr[])
{
    int maxSum = INT_MIN, maxAtCurrentIndex = 0;
    for (int i = 0; i < size; i++)
    {
        maxAtCurrentIndex += arr[i];
        maxSum = max(maxSum, maxAtCurrentIndex);
        if (maxAtCurrentIndex < 0)
            maxAtCurrentIndex = 0;
    }
    return maxSum;
}

int maxCircularSubarraySum(int size, int arr[])
{
    int nonContributingElementWrapSum, contributingElementWrapSum, totalSumOfOrgArray = 0;
    nonContributingElementWrapSum = kadane(size, arr);
    for (int i = 0; i < size; i++)
    {
        totalSumOfOrgArray += arr[i];
        arr[i] = -arr[i];
    }
    contributingElementWrapSum = totalSumOfOrgArray + kadane(size, arr);
    return max(nonContributingElementWrapSum, contributingElementWrapSum);
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];

    cout << "Maximum sum of circular subarray is: " << maxCircularSubarraySum(numOfElements, arr) << endl;
    return 0;
}