/*定义 Boat 与 Car 两个类，二者都有weight属性，定义二者的一个友元函数
totalWeight()，计算二者的重量和。*/

#include <iostream>
using namespace std;

class Boat;
class Car
{
private:
    int weight;

public:
    Car(int j) { weight = j; }
    friend int totalWeight(Car &aCar, Boat &aBoat);
};
class Boat
{
private:
    int weight;

public:
    Boat(int j) { weight = j; }
    friend int totalWeight(Car &aCar, Boat &aBoat);
};
int totalWeight(Car &aCar, Boat &aBoat)
{
    return aCar.weight + aBoat.weight;
}

int main(int argc, char const *argv[])
{
    Car c(4);
    Boat b = 5;
    cout << totalWeight(c, b);
    return 0;
}
