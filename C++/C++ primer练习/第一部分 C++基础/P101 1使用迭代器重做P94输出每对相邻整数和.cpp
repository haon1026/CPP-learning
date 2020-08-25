//时间：2019年5月13日17:57:56
//读入一组整数输出相邻整数的和

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    std::cout << "请输入一组整数:" << std::endl;
    int n;
    while (std::cin >> n)
        v.push_back(n);

    if(v.cbegin() == v.cend())
    {
        std::cout << "没有任何元素" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "这组整数分别是:" << std::endl;
        for (auto c : v)
            std::cout << c << " ";
        std::cout << std::endl;
        std::cout << "相邻两项相加以及和分别是：" << std::endl;
/*
        auto it = v.cbegin();
        if (v.size() %2 == 0)
            for (;it != v.end(); it+=2)
            {
                std::cout << *it << " + " << *(it+1) << " = " << *it + *(it+1) << std::endl;
            }
        else
        {
            for (;it != v.end() - 1; it+=2)
                std::cout << *it << " + " << *(it+1) << " = " << *it + *(it+1) << std::endl;
            std::cout << v[v.size()-1] << std::endl;      //单独处理最后一个元素
        }
*/

        for (auto it = v.cbegin(); it != v.cend() - 1 && it != v.cend(); ++it)      //标准答案有误？偶数个数出现异常，加入&& it!=v.cend()正常
        {
            //求相邻两项的和
            std::cout << (*it + *(++it)) << " ";
            //每行输出5个数字
            if ((it - v.cbegin() +1) % 10 == 0)
                std::cout << std::endl;
        }
        //如果元素个数是奇数，单独处理最后一个元素
        if (v.size() % 2 != 0)
            std::cout << *(v.cend() -1);

        return 0;
    }



}
