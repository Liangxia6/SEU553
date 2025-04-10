/*打开文件（纯英文文本），从文件中读取数据并统计: 大写字母的个数 ,空格的个
数 ,标点符号的个数 ,单词的个数（连续的英文字符算一个单词）,数字的个数（连
续的数字算一个数）, 其他字符的个数。*/

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in;
    in.open("./build/file.txt");
    string s;
    stringstream buffer;
    buffer << in.rdbuf(); // 读取整个文件到 stringstream 中

    // 将 stringstream 中的内容转换为 string
    s = buffer.str();
    bool inword = 0;
    bool innumber = 0;
    int len = s.length();
    int daxie = 0;
    int kongge = 0;
    int biaodian = 0;
    int danci = 0;
    int shuzi = 0;
    int qita = 0;
    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
        {
            daxie++;
            if (!inword)
            {
                danci++;
                inword = true;
            }
            innumber = 0;
        }
        else if (islower(s[i]))
        {
            if (!inword)
            {
                danci++;
                inword = true;
            }
            innumber = 0;
        }
        else if (isdigit(s[i]))
        {
            if (!innumber)
            {
                shuzi++;
                innumber = true;
            }
            inword = 0;
        }
        else if (isspace(s[i]))
        {
            kongge++;
            inword = 0;
            innumber = 0;
        }
        else if (ispunct(s[i]))
        {
            biaodian++;
            inword = 0;
            innumber = 0;
        }
        else
        {
            qita++;
            inword = 0;
            innumber = 0;
        }
    }

    cout << "daxie:" << daxie << endl;
    cout << "danci:" << danci << endl;
    cout << "shuzi:" << shuzi << endl;
    cout << "biaodian:" << biaodian << endl;
    in.close();
    return 0;
}
