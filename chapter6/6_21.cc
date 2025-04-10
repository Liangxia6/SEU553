/*编写一个函数，统计一个英文句子中字母的个数，在主程序中实现输入、输出。 */

#include <iostream>
using namespace std;

int count(const char *s)
{
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            num++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            num++;
    }
    return num;
}

int main()
{
    const char *a = "dsuighsoihd  aspjoas2q 4tweeotjwp4o509qw re'gls";
    cout << count(a);
    return 0;
}