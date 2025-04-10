// 写函数完成int数组前m项与后n项换位置

using namespace std;
#include <iostream>
#include <algorithm> // std::swap

void swapSections(int arr[], int len, int m, int n)
{
    if (m + n > len)
    {
        std::cout << "Invalid input: m + n must be less than or equal to the length of the array." << std::endl;
        return;
    }

    // 临时数组存储后 n 项
    int *temp = new int[n];

    // 将后 n 项存入临时数组
    for (int i = 0; i < n; ++i)
    {
        temp[i] = arr[len - n + i];
    }

    // 将前 m 项移动到后 n 项的位置
    for (int i = 0; i < m; ++i)
    {
        arr[len - n + i] = arr[i];
    }

    // 将临时数组中的后 n 项移到前 m 项的位置
    for (int i = 0; i < n; ++i)
    {
        arr[i] = temp[i];
    }

    // 释放临时数组的内存
    delete[] temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr) / sizeof(arr[0]);
    int m = 3, n = 3;

    std::cout << "Original array: ";
    for (int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // 调用函数交换前 m 项和后 n 项
    swapSections(arr, len, m, n);

    std::cout << "Array after swap: ";
    for (int i = 0; i < len; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
