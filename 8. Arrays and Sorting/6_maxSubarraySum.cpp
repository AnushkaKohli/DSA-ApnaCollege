// Find the subarray in an array which has the maximum sum.

#include <iostream>
#include <climits>
using namespace std;

// Brute Force Approach
// Time Complexity: O(n^3)
int maxSubarraySum1(int size, int arr[])
{
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
                sum += arr[k];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// Cumulative Sum Approach
// Time Complexity: O(n^2)
int maxSubarraySum2(int size, int arr[])
{
    int cumulativeSum[20];
    cumulativeSum[0] = arr[0];
    for (int i = 1; i < size; i++)
        cumulativeSum[i] = cumulativeSum[i - 1] + arr[i];

    int maxSum = INT_MIN, currentSum = 0;

    // First find the maximum sum from the cumulative sum array
    for (int i = 0; i < size; i++)
        maxSum = max(maxSum, cumulativeSum[i]);

    // Iterate through the cumulative sum array and find the maximum sum
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            currentSum = cumulativeSum[j] - cumulativeSum[i];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}

// Kadane's Algorithm
// Time Complexity: O(n)
int maxSubarraySum3(int size, int arr[])
{
    int maxSum = INT_MIN, maxAtCurrentIndex = 0;
    for (int i = 0; i < size; i++)
    {
        maxAtCurrentIndex += arr[i];
        if (maxAtCurrentIndex < 0)
            maxAtCurrentIndex = 0;
        maxSum = max(maxSum, maxAtCurrentIndex);
    }
    return maxSum;
}

int main()
{
    int numOfElements, arr[10];
    cout << "Enter number of elements: ";
    cin >> numOfElements;
    cout << "Enter elements: ";
    for (int i = 0; i < numOfElements; i++)
        cin >> arr[i];

    // cout << "Maximum sum of subarray is: " << maxSubarraySum1(numOfElements, arr) << endl;
    // cout << "Maximum sum of subarray is: " << maxSubarraySum2(numOfElements, arr) << endl;
    cout << "Maximum sum of subarray is: " << maxSubarraySum3(numOfElements, arr) << endl;
    return 0;
}