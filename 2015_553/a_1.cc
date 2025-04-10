// 编写一个递归函数，其功能为：输入一个字符串，
// 字符间都有空格，输出一个整型值。
// 例如：输入“1 x 2 y z 3 d h 4 g 5”，输出为 54321。

#include <iostream>
#include <stack>
using namespace std;

void fun(char *str)
{
    stack<char> s;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= '9' && str[i] >= '1')
        {
            s.push(str[i]);
        }
        i++;
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main(int argc, char const *argv[])
{
    char *s = "1 x 2 y z 3 d h 4 g 5";
    fun(s);
    return 0;
}
