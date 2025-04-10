// 使用字符数组存储一段字符，判断是否是回文字符串（需要判断并忽略空格）

#include <iostream>
#include <string.h>
using namespace std;

int isHuiwen(char *arr)
{
    int j = strlen(arr) - 1;
    int i = 0;
    while (i != j)
    {
        if (arr[i] == ' ' && arr[j] == ' ')
        {
            if (arr[i] == ' ')
                i++;
            else if (arr[j] == ' ')
                j--;
        }
        else if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] != arr[j])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{

    return 0;
}
