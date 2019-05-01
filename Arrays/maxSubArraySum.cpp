#include <iostream>

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int curSum = 0;
    int maxSum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    // Generate All SubArrays
    for (int i = 0; i < size; i++)
    {
        curSum = 0;
        for (int j = i; j < size; j++)
        {
            curSum += arr[j];
        }
        std::cout << curSum << std::endl;
        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
    }

    std::cout << "Max SubArray Sum = " << maxSum << std::endl;
}