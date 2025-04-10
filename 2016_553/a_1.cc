// 用键盘输入一行文本，如that is a question，请编写一个teat函数
// 将文本的单词和对应的单词长度输入数组，并像以下方式输出

#include <iostream>
#include <string>
using namespace std;

void test(string s)
{
    int i = 0;
    int len = 0;
    int head = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            len++;
        }
        else
        {
            cout << s.substr(head, len) << "       " << len << endl;
            head = i + 1;
            len = 0;
        }
        i++;
    }
}

int main(int argc, char const *argv[])
{
    string s = "aefiasd asdoigfh pa eE F";
    test(s);
    return 0;
}
