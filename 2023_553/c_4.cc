/*4. 设计一个MySet，是一个集合类，其中有2个数据成员，为整形指针ptr，表示大小的整数size，并且此数组中的成员不可以重复。要求实现以下功能:
(1)有构造函数，析构函数，复制构造函数(2)可以实现插入一个元素，删除一个元素(3)重载运算符+和<<
(4)可以查找一个元素，返回下标*/

#include <iostream>
using namespace std;

class Myset
{
private:
    int *ptr;
    int size;

public:
    Myset() : ptr(NULL), size(0) {}

    Myset(Myset &other) : ptr(NULL), size(other.size)
    {
        if (size > 0)
        {
            ptr = new int[size];
            for (int i = 0; i < size; i++)
            {
                ptr[i] = other.ptr[i];
            }
        }
    }

    ~Myset()
    {
        delete[] ptr;
    }

    int insert(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == value)
                return -1;
        }
        int *newset = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            newset[i] = ptr[i];
        }
        newset[size++] = value;
        delete[] ptr;
        ptr = newset;
        return 1;
    }

    int remove(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == value)
            {
                int index = i;
                int *newset = new int[size - 1];
                int k = 0;
                for (int j = 0; j < size; j++)
                {
                    if (j == index)
                        continue;
                    newset[k++] = ptr[j];
                }
                delete[] ptr;
                ptr = newset;
                size--;
                return 1;
            }
        }
        return -1;
    }

    int find(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (ptr[i] == value)
                return i;
        }
        return -1;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i];
        }
        cout << endl;
    }

    Myset &operator+(Myset &other)
    {
        for (int i = 0; i < other.size; i++)
        {
            insert(other.ptr[i]);
        }
        return *this;
    }

    friend ostream &operator<<(ostream &os, Myset &set);
};

ostream &operator<<(ostream &os, Myset &set)
{
    for (int i = 0; i < set.size; i++)
    {
        os << set.ptr[i] << " ";
    }
    return os;
}

int main(int argc, char const *argv[])
{
    Myset myset;
    myset.insert(1);
    myset.insert(7);
    myset.insert(9);
    myset.insert(4);
    myset.insert(6);
    myset.insert(6);
    Myset myset2;
    myset2.insert(4);
    myset2.insert(8);
    cout << myset << endl;
    cout << myset2 << endl;
    Myset myset3 = myset + myset2;
    cout << myset3 << endl;
    return 0;
}
