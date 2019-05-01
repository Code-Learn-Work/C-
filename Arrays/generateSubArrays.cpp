#include <iostream>

int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -1, -4, -7};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Generate All SubArrays
    for (int i = 0; i < size; i++)
    {
        std::cout << "Array " << i + 1 << ": ";
        for (int j = i; j < size; j++)
        {
            std::cout << arr[j] << ", ";
        }
        std::cout << std::endl;
    }
}