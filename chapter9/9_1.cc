/*程序中提示输入班级中的学生人数N，再依次提示用户输入N个人在课程A的考试成绩，
然后计算出平均成绩，显示出来。请使用教材第9章中的数组类模板Array定义浮点型数
组储存考试成绩值。 */

#include <iostream>
#include "9_1.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int temp;
    double ave = 0;
    cout << "input num" << endl;
    cin >> n;
    Array<int> score(n);
    for (int i = 0; i < n; i++)
    {
        cout << "input " << i + 1 << " score" << endl;
        cin >> temp;
        // cout << temp << endl;
        ave += temp;
    }
    ave = ave / n;
    cout << "ave score is " << ave << endl;
    return 0;
}
