// 随机生成 10 个到 100000 个数字，转换字符串并输出至文件。

#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(0));
    int a = rand() % 99991 + 10;
    ofstream of("./build/file2", ofstream::app);
    of << to_string(a) << endl;
    return 0;
}
