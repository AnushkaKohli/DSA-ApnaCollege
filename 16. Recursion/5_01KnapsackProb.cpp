// 0/1 Knapsack problem - Given weights and values of n items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.

#include <iostream>
using namespace std;

int knapsack(int value[], int weight[], int n, int w)
{
    if (n == 0 || w == 0)
        return 0;
    int include = knapsack(value, weight, n - 1, w - weight[n - 1]) + value[n - 1];
    int exclude = knapsack(value, weight, n - 1, w);
    if (weight[n - 1] > w)
        return exclude;
    return max(include, exclude);
}

int main()
{
    int numOfItems, capacityOfKnapsack, value[20], weight[20];
    cout << "Enter the number of items: ";
    cin >> numOfItems;
    cout << "Enter the capacity of knapsack: ";
    cin >> capacityOfKnapsack;
    cout << "Enter the values of items: ";
    for (int i = 0; i < numOfItems; i++)
        cin >> value[i];
    cout << "Enter the weights of items: ";
    for (int i = 0; i < numOfItems; i++)
        cin >> weight[i];
    cout << "Maximum value that can be put in a knapsack of capacity " << capacityOfKnapsack << " is: " << knapsack(value, weight, numOfItems, capacityOfKnapsack) << endl;
    return 0;
}