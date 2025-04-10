#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int rowSum[100] = {0};
    int colSum[100] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << "Row " << i << " sum = " << rowSum[i] << endl;
    }

    // 输出每列的和
    for (int j = 0; j < n; j++)
    {
        cout << "Col " << j << " sum = " << colSum[j] << endl;
    }
    return 0;
}