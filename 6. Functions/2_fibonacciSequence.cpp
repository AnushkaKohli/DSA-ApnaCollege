#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int first = 0, second = 1, next;
    for (int i = 1; i <= num; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    return;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    fibonacci(num);
    return 0;
}