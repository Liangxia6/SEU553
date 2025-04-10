// 输出 1000 以内的完数，格式：完数 = 因子 1 + 因子 2 + … 因子 n。

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[1000] = {0};
    int k = 0;
    int sum = 0;
    for (int i = 2; i < 1000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                arr[k] = j;
                k++;
            }
        }
        k = 0;
        while (arr[k] != 0)
        {
            sum += arr[k];
            k++;
        }
        if (sum == i)
        {

            for (k = 0; arr[k + 1] != 0; k++)
            {
                cout << arr[k] << "+";
            }
            cout << arr[k] << "=" << sum << endl;
        }
        for (int m = 0; m < 1000; m++)
        {
            arr[m] = 0;
        }
        sum = 0;
        k = 0;
    }
    return 0;
}
