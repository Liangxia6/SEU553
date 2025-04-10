// 编写函数reverse(char *s)的倒序递归程序，使字符串s倒序。

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

void reverse(char *s, int start, int end)
{
    if (end <= start)
    {
        return;
    }
    swap(s[start], s[end]);
    // reverse(s, start ++, end --);

    reverse(s, ++start, --end);
}

int main()
{
    char a[] = "Hello World";
    reverse(a, 0, 10);
    cout << a;
}