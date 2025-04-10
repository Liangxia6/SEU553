#include <iostream>
using namespace std;

// 八大排序

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

// 插入排序
void Sort1(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = i;
        int x = arr[temp];
        int j = 0;
        while (x > arr[j])
        {
            j++;
        }
        for (; j < temp; temp--)
        {
            arr[temp] = arr[temp - 1];
        }
        arr[j] = x;
    }
}

// 希尔排序
void Sort2(int arr[], int n)
{
    int gap = n;
    while (gap >= 1)
    {
        gap = gap / 2;
        for (int i = gap; i < n; i++)
        {
            int temp = arr[i];
            int j = i - gap;
            for (; j >= 0; j -= gap)
            {
                if (arr[j] > temp)
                {
                    arr[j + gap] = arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j + gap] = temp;
        }
    }
}

// 选择排序
void Sort3(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
            }
        }
        swap(arr[i], arr[temp]);
    }
}

// 堆排序
void Sort4(int arr[], int n)
{
    int temp;
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        temp = arr[i];
        for (int j = 2 * i + 1; j <= n - 1; j = j * 2 + 1)
        {
            if (j < n - 1 && arr[j] < arr[j + 1])
            {
                j++;
            }
            if (arr[j] > temp)
            {
                arr[i] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[i] = temp;
    }
    for (int i = 0; i < n - 1; i++)
    {
        temp = arr[0];
        arr[0] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
        temp = arr[0];
        for (int j = 1; j <= n - 2 - i; j = j * 2 + 1)
        {
            if (j < n - 2 - i && arr[j] < arr[j + 1])
            {
                j++;
            }
            if (arr[j] > temp)
            {
                arr[0] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[0] = temp;
    }
}

// 冒泡排序
void Sort5(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 快速排序
void Sort6(int array[], int low, int high)
{
    int i = low;
    int j = high;
    if (i >= j)
    {
        return;
    }
    int temp = array[low];
    while (i != j)
    {
        while (array[j] >= temp && i < j)
        {
            j--;
        }
        while (array[i] <= temp && i < j)
        {
            i++;
        }
        if (i < j)
        {
            swap(array[i], array[j]);
        }
    }
    swap(array[low], array[i]);
    Sort6(array, low, i - 1);
    Sort6(array, i + 1, high);
}

// 归并排序
int buff[13];
void Sort7(int array[], int low, int high)
{
    if (low > high)
    {
        return;
    }
    int mid = (high + low) / 2;
    Sort7(array, low, mid);
    Sort7(array, mid + 1, high);
    int temp = low;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (array[left] <= array[right])
        {
            buff[temp++] = array[left++];
        }
        else
        {
            buff[temp++] = array[right++];
        }
    }
    while (left <= mid)
    {
        buff[temp++] = array[left++];
    }
    while (right <= high)
    {
        buff[temp++] = array[right++];
    }
    for (int i = low; i <= high; i++)
    {
        array[i] = buff[i];
    }
}

// 基数排序

int main(int argc, char const *argv[])
{
    int arr[] = {4, 3, 8, 3, 7, 8, 2, 0, 9, 3, 5, 6, 7};
    Sort7(arr, 0, 12);
    Print(arr, 13);
    return 0;
}
