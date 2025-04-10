/*输入一个数字n表示层数，在输入数字来表示三角形，要求三角形求解从顶到低的最长路径，在力扣中有类似的题目，
也可以做做这道题leetcode120。（注：原题描述记不清；原题数据忘记，本题数据是作者编的）*/

#include <iostream>
using namespace std;

void print(int *arr, int size);
int *input(int size);
int digui(int *arr, int size, int row, int col);
int ditui(int *arr, int size);

int main()
{
    int n;
    cin >> n;
    int *arr = input(n);
    cout << digui(arr, n, 0, 0) << endl;
    print(arr, n);
    cout << ditui(arr, n) << endl;
    print(arr, n);
    return 0;
}

void print(int *arr, int size)
{
    int index = 0;
    for (int n = 1; n <= size; n++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[index++] << ' ';
        }
        cout << endl;
    }
}
int *input(int size)
{
    if (size <= 0)
        return nullptr;
    int ns = (size + 1) * size / 2;
    int *ans = new int[ns];
    for (int i = 0; i < ns; i++)
        cin >> ans[i];
    return ans;
}
int digui(int *arr, int size, int row, int col)
{
    if (size == row)
        return 0;
    int l = digui(arr, size, row + 1, col);
    int r = digui(arr, size, row + 1, col + 1);
    int index = row * (row + 1) / 2 + col;
    return l > r ? l + arr[index] : r + arr[index];
}
int ditui(int *arr, int size)
{
    int s = size * (size + 1) / 2 - 1;
    s -= size;
    for (int row = size - 2; row >= 0; row--)
    {
        for (; row * (row + 1) / 2 <= s; s--)
        {
            int l = arr[s + row + 1];
            int r = arr[s + row + 2];
            int m = l > r ? l : r;
            arr[s] += m;
        }
    }
    return arr[0];
}