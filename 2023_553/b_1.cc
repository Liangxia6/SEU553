// 填空合并两个有序数组

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 8, 9, 10};
    int b[] = {6, 7, 11, 12, 13, 14, 15};
    int M = sizeof(a) / sizeof(a[0]);
    int N = sizeof(b) / sizeof(b[0]);
    int *ans = new int[M + N];
    int i = 0, j = 0, k = 0;
    while (k < (M + N) && i < M && j < N)
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i++];
        }
        else
        {
            ans[k++] = b[j++];
        }
    }
    while (i < M)
    {
        ans[k++] = a[i++];
    }
    while (j < N)
    {
        ans[k++] = b[j++];
    }
    for (int i = 0; i < M + N; i++)
    {
        cout << ans[i] << "";
    }
    delete[] ans;
    return 0;
}
