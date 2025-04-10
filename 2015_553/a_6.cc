// 对一副扑克抽取1000次，写出函数计算并打印每个牌值得概率

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unordered_map>

void drawCards(int numDraws)
{
    // 牌值对应的字符串表示
    std::string values[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    // 用unordered_map来统计每个牌值的出现次数
    std::unordered_map<std::string, int> count;

    // 初始化计数器
    for (const auto &value : values)
    {
        count[value] = 0;
    }

    // 随机抽牌numDraws次
    for (int i = 0; i < numDraws; ++i)
    {
        // 随机抽取一个0到12之间的整数对应牌值（0代表2，1代表3，...，12代表A）
        int randomIndex = rand() % 13;
        count[values[randomIndex]]++;
    }

    // 打印每个牌值的概率
    std::cout << "牌值的概率计算结果（基于" << numDraws << "次抽取）：" << std::endl;
    for (const auto &value : values)
    {
        double probability = static_cast<double>(count[value]) / numDraws;
        std::cout << value << ": " << probability << std::endl;
    }
}

int main()
{
    // 设置随机数种子
    srand(time(0));

    int numDraws = 1000; // 抽取次数
    drawCards(numDraws);

    return 0;
}