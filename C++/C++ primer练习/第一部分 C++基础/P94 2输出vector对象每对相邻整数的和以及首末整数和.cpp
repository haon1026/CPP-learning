//时间：2019年5月12日19:57:34
//读入一组整数输出相邻整数的和以及首末整数和...

#include <iostream>
#include <vector>

int main()
{
    //读入一组整数
    std::vector<int> v;
    std::cout << "请输入一组整数：" << std::endl;
    int num;

    while (std::cin >> num)
        v.push_back(num);
    std::cout << std::endl;
    if (v.size() == 0)
    {
        std::cout << "没有任何元素" << std::endl;
        return -1;
    }
/*
    //输出每对相邻整数的和
    std::cout << "相邻两项相加以及结果：" << std::endl;
    for (decltype(v.size()) i = 0; i < v.size()-1; i += 2)
    {
        std::cout << v[i] << " + " << v[i+1] << " = " << v[i] + v[i+1] << std::endl;
    }
    //如果元素是奇数个，最后一项单独处理
    if (v.size() % 2 != 0)
        std::cout << v[v.size()-1] << std::endl;
*/

    //输出第1个和最后1个元素的和,以此类推
    std::cout << "首尾两项的和依次是：" << std::endl;
    for (decltype(v.size()) i = 0; i < v.size() && i < v.size() -1 - i; ++i)      //或者判断条件i < v.size() / 2
    {
        std::cout << v[i] << " + " << v[v.size()-1-i] << " = " << v[i] + v[v.size()-1-i] << std::endl;
    }
    //如果元素是奇数个，最后一项单独处理
    if (v.size() % 2 != 0)
        std::cout << v[v.size() / 2] << std::endl;

    return 0;
}
