/*）写一个函数，判断一个正整数是否为同构数，正整数范围[1, 10000]
例：376 * 376 = 14376，376出现在平方数中，则376是一个同构数*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    string b;
    int t = 0;
    for (int i = 1; i < 10000; i++)
    {
        t = i * i;
        a = to_string(t);
        b = to_string(i);
        if (a.find(b) != -1)
            cout << i << "*" << i << "=" << i * i << "   ";
    }
    return 0;
}
