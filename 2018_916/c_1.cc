// 实现一个简单示例，输入一个二维数组，
// 按行优先或列优先顺序将其存储并输出。
#include <iostream>
using namespace std;

void printRows(int **arr, int rows, int cols)
{
    cout << "in print by rows" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printCols(int **arr, int rows, int cols)
{
    cout << "in print by cols" << endl;
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, cols;
    cout << "number of rows";
    cin >> rows;
    cout << "number of columns";
    cin >> cols;
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    printRows(arr, rows, cols);
    printCols(arr, rows, cols);
}