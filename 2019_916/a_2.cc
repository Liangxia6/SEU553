#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int b[3] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            b[i] += a[i][a[j][i]];
    for (int i = 0; i < 3; i++)
        cout << b[i] << " " << endl;
}