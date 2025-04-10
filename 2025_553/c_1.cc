#include <iostream>
#include <ctime>
#include <vector>
#include <map>
using namespace std;

void getarr(vector<int> &arr)
{
    srand(time(0));
    for (int i = 0; i < 20; i++)
    {
        arr.push_back(rand() % 10 + 1);
    }
}

void findMost(vector<int> &arr)
{
    map<int, int> freq;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        freq[*it]++;
    }
    int max1 = 1;
    int maxnum1 = 0;
    int max2 = 1;
    int maxnum2 = 0;

    for (auto pair : freq)
    {
        if (pair.second > max1)
        {
            max2 = max1;
            maxnum2 = maxnum1;
            max1 = pair.second;
            maxnum1 = pair.first;
        }
        else if (pair.second > max2)
        {
            max2 = pair.second;
            maxnum2 = pair.first;
        }
    }
    cout << "max:" << maxnum1 << "num:" << max1 << endl;
}

vector<int> &removeDu(vector<int> &arr)
{
    map<int, int> temp;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        temp[*it]++;
    }
    for (auto it = arr.begin(); it != arr.end())
    {
        if (temp[*it] == 1)
        {
            it++;
        }
        else
        {
            temp[*it]--;
            arr.erase(it);
        }
    }
}
