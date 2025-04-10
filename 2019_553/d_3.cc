/*实现一个selfString类，要求至少包含构造函数和析构函数，
构造函数功能从文件里读取一行英文字符串，也得有一个功能函数，
该功能函数实现在两个字符串中找到他们的公共单词，要求必须是长度最长的公共单词，
selfString有两个私有数据成员一个是字符数组，一个是Length
，每个英文单词之间用空格分隔开，最后一点要求：不允许使用标准模板库。*/

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class selfString
{
private:
    char *s;
    int len;

public:
    selfString()
    {
        ifstream in("./build/file3");
        s = new char[100];
        in.getline(s, 1000);
        len = strlen(s);
        in.close();
    }
    ~selfString()
    {
        delete[] s;
    }
    char *find(selfString &s1)
    {
        int len = 0;
        int p = -1;
        for (int i = 0; i < len; i++)
        {
            int k = i;
            for (int j = 0; j < s1.len && s[i] == s1.s[j]; k++, j++)
            {
                if (len < j - i)
                {
                    len = j;
                    p = i;
                }
                j = 0;
            }
        }
        char *ans = new char[len];
        memcpy(ans, s, len);
        return ans;
    }
};
