// 2. 随机生成两组1-13 的数字，一组13个元素(是扑克牌)，
// 要将其按照从小到大的顺序排序，
// 并且统计出现次数分别为2,3,4 的牌的种类数目,比如:
// pairs1: A,A,2,2,4,4,4,6,7,10,J,Q,K
// pairs:2 threes:1  fours:0
// Pairs2: A,2,3,4,4,4,4,6,7,10,10,Q,K
// pairs:1 threes:0	fours:1

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    srand(time(0));

    int deck1[13], deck2[13];

    for (int i = 0; i < 13; i++)
    {
        deck1[i] = rand() % 13 + 1;
        deck2[i] = rand() % 13 + 1;
    }

    sort(deck1, deck1 + 13);
    sort(deck2, deck2 + 13);

    unordered_map<int, int> countMap;
    for (int i = 0; i < 13; i++)
    {
        countMap[deck1[i]]++;
        countMap[deck2[i]]++;
    }

    int pairs = 0, three = 0, fours = 0;
    for (auto it = countMap.begin(); it != countMap.end(); it++)
    {
        if (it->second == 2)
        {
            pairs++;
        }
        if (it->second == 3)
        {
            three++;
        }
        if (it->second == 4)
        {
            fours++;
        }
    }

    cout << "Deck1:";
    for (int i = 0; i < 13; i++)
    {
        cout << deck1[i] << " ";
    }
    cout << endl;

    cout << "Deck2:";
    for (int i = 0; i < 13; i++)
    {
        cout << deck1[i] << " ";
    }
    cout << endl;
}