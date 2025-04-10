/*格式转换，从一个文件中读取日期07/21/2016，
转换为以下格式July 21,2016并输出到屏幕上*/

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    string Mon[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
    string Mon1[13] = {"", "01", "02", "03"};
    ifstream in("./build/file4");
    string s;
    in >> s;
    for (int i = 1; i < 13; i++)
    {
        if (Mon1[i] == s.substr(0, 2))
        {
            cout << Mon[i] << " ";
        }
    }
    cout << s.substr(3, 2) << "," << s.substr(6, 4);
    return 0;
}
