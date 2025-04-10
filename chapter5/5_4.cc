/*假设有两个无关系的类Engine和Fuel，使用时，怎样允许Fuel成员访问Engine中的
私有和保护的成员? */

#include <iostream>
using namespace std;

class fuel;
class engine
{
    friend class fuel;

private:
    int powerlevel;

public:
    engine() { powerlevel = 0; }
    void engine_fn(fuel &f);
};
class fuel
{
    friend class engine;

private:
    int fuelLevel;

public:
    fuel() { fuelLevel = 0; }
    void fuel_fn(engine &e);
};