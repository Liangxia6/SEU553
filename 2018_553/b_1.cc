//判断闰年

#include <iostream>
using namespace std;

bool isLeapYear(int y)
{

    if (y % 4 == 0 && y % 100 != 0)
    {

        return true;
    }
    else if (y % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int year;
    cin >> year;
    if (isLeapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is a common year." << endl;
    }
    return 0;
}