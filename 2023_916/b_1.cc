/*产生一个随机长度的随机数数组，并使用冒泡排序对数组进行排序，
然后以16进制的形式输出数组。（注：题目原话记不得了）
在测试中，如果不使用`srand((unsigned)time(NULL))`;
作为随机种子，每次的结构都是一样的，所以我加了两行注释，原题是没有的*/

#include <iostream>
#include <string>
#include <ctime>     // 这一行是自己加的，原题没有
using namespace std; // 设空

void genterator(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; // 设空
    }
}

void bubble(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - 1 - i; j++)
        { // size-1-i设空
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            return; // 设空
    }
}

string transform(int num)
{
    string s;
    if (num == 0)
        return "0"; // 设空
    while (num != 0)
    {
        int d = num % 16;
        if (d < 10)
        { // 设空
            s = char(d + '0') + s;
        }
        else
        {
            d -= 10; // 空
            s = char(d + 'A') + s;
        }
        num /= 16; // 空
    }
    return s;
}

int main()
{
    srand((unsigned)time(NULL));  // 这一行是自己加的，原题没有
    const int size = rand() % 20; // 空
    int a[size];
    genterator(a, size);
    bubble(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << transform(a[i]) << endl;
    }
    return 0;
}