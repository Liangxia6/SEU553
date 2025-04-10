// 写一个函数模板完成二分查找的功能，
// 是在数组中查找且该数组中的元素是有序的，必须使用递归实现。

#include <iostream>
using namespace std;

template <typename T>
int binaSearch(T *arr, T temp, int head, int end)
{
    int index = (head + end) / 2;
    if (head > left)
        return -1;
    if (arr[index] == temp)
        return index;
    if (arr[index] < temp)
        binaSearch(arr, temp, index + 1, end);
    if (arr[index] > temp)
        binaSearch(arr, temp, head, index - 1);
}