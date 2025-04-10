// 编写一个矩阵转置的函数，矩阵的维数在程序中由用户输入

#include <iostream>
using namespace std;

void move(int matrix[4][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int m[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}, {4, 5, 6, 7}};
    move(m, 4);
    cout << **m;

    return 0;
}

// 改用vector