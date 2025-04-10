/*逆序输出前若干个非空白字符，
要求下列程序能够输出：`rebyCymsisihtolleH`。*/

#include <iostream>
using namespace std; // 空

void reverString(char *a, int b);

int main()
{
    char str[] = "Hello this is my Cyber S&E!!"; // 空
    reverString(str, 0);                         // 空
    return 0;
}

void reverString(char *a, int b)
{ // b设空
    static int chars = 0;
    if (chars == 18 && a[b] == '\0') // 空
        return;

    if (a[b] != ' ')
        chars++;           // 空
    reverString(a, b + 1); // b+1设空
    if (a[b] != ' ')       // 空
        cout << a[b];
}