//时间：2019年6月13日23:41:06
//编写程序处理一个vector string,其元素都表示整形值，计算vector所有元素之和。
//修改程序，使之计算表示浮点值的string之和

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


int main()
{
    std::vector<std::string> svec = {"123", "+456", "-789"};
    int sum = 0;
    for(auto iter = svec.begin(); iter != svec.end(); iter++)
    {
        sum += stoi(*iter);
    }
    std::cout << "vector所有元素之和：" << sum << std::endl;

    return 0;
}
