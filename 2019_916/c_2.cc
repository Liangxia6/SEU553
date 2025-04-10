// 用函数模版，实现求数组元素最小值的下标，若找不到返回-1，要求使用递归

#include <iostream>
using namespace std;

template <typename T>
int findMin(T *arr, int len, int index = 0, int minindex = -1)
{
    if (index == len)
        return minindex;
    if (minindex == -1 || arr[index] < arr[minindex])
    {
        minindex = index;
    }
    return findMin(arr, len, 1 + index, minindex);
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minIndex = findMin(arr, size);
    cout << minIndex;
    return 0;
}
