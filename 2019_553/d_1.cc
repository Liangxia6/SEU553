// 先用随机函数rand按列优先初始化一个3行4列的数组
// 数组中元素的范围是[1,9]，
// 然后判断该数组中是否有鞍点(即是否存在既是行上最大又是列上最小的元素)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool haveAnDian(int[3][4], int, int);

int main()
{
    int a[3][4];
    srand(std::time(0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = std::rand() % 9 + 1;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (haveAnDian(a, i, j))
            {
                cout << "have AnDian" << endl;
                cout << "i=" << i + 1 << " j=" << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "have no AnDian" << endl;
    return 0;
}

bool haveAnDian(int a[3][4], int i, int j)
{
    int temp = a[i][j];
    for (int ii = 0; ii < 3; ii++)
    {
        if (a[ii][j] < temp)
        {
            return false;
        }
    }
    for (int jj = 0; jj < 4; jj++)
    {
        if (a[i][jj] > temp)
        {
            return false;
        }
    }
    return true;
}
