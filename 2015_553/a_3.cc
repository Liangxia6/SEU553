/*编写FindRepStr()函数，此函数功能为，在字符串str中查找目的字符串findStr，
并用repalceStr来替换，最后输出替换后的字符串str。函数原型为：
void FindRepStr( char str[], const char findStr[], const replaceStr[]);
*/

#include <iostream>
#include <string.h>
using namespace std;

void FindRepStr(char str[], const char findStr[], const char replaceStr[])
{
    char *temp = strstr(str, findStr);
    char s[10] = {0};
    if (temp != NULL)
    {
        strcpy(s, &(temp[strlen(findStr)]));
        temp[0] = '\0';
        strcat(str, replaceStr);
    }
    strcat(str, s);
}

int main(int argc, char const *argv[])
{
    char s[30] = {0};
    strcpy(s, "Hello World Yeah");
    FindRepStr(s, "World", "SEU");
    cout << s;
    return 0;
}
