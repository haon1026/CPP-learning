//时间：2019年5月8日09:44:11
//读取数量不定的输入数据

#include <iostream>

int main()
{
    int sum = 0, value = 0;

    while (std::cin >> value)       //检测流的状态：遇到文件结束符合无效输入，状态无效，使条件为假
        sum += value;
    std::cout << "Sum is:" << sum << std::endl;

    return 0;
}
