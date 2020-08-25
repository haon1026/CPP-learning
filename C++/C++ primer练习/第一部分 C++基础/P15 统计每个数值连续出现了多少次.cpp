//时间：2019年5月7日13:24:19
//统计每个数值连续出现了多少次           //while循环终止条件？为何需要加最后一句输出？

#include <iostream>

int main()
{
    int currVal = 0, val = 0;

    if (std::cin >> currVal)
    {
        int cnt =1;
        while (std::cin >> val)
        {
            if (currVal == val)
            {
                ++cnt;
            }
            else
            {
               std::cout << currVal << "出现了" << cnt << "次" << std::endl;
               currVal = val;
               cnt = 1;
            }
        }
        std::cout << "hh" << '\n';
        std::cout << currVal << "出现了" << cnt << "次" << std::endl;
    }

    return 0;
}
