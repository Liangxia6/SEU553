// 读程序

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *a[5] = {"orange", "purple", "red", "yellow", "green"};
    const char *p1 = a[0], *p2 = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(p1, a[i]) < 0)
        {
            p1 = a[i];
        }
        else if (strcmp(p2, a[i]) > 0)
        {
            p2 = a[i];
        }
        cout << p1 << "," << p2 << endl;
    }
    return 0;
}

/*strcmp(p1, a[i]) < 0：如果 p1 指向的字符串小于 a[i]，说明 a[i] 是更大的字符串，因此将 p1 更新为 a[i]。
strcmp(p2, a[i]) > 0：如果 p2 指向的字符串大于 a[i]，说明 a[i] 是更小的字符串，因此将 p2 更新为 a[i]。*/