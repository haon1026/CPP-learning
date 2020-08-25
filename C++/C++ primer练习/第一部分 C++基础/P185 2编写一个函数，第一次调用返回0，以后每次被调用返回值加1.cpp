//时间：2019年5月22日21:58:20
//编写一个函数，第一次调用返回0，以后每次被调用返回值加1

#include <iostream>

//该函数仅用于统计执行的次数
unsigned myCnt()
{
    static unsigned iCnt = -1;   //调用结束后，这个值仍然有效       初次运行时进行，初始化工作且只初始化一次
    ++iCnt;
    return iCnt;
}

int main()
{
    std::cout << "请输入任意字符后按回车键继续" << std::endl;
    char ch;
    while (std::cin >> ch)
    {
        std::cout << "函数myCnt()的执行次数是：" << myCnt() << std::endl;
    }

    return 0;
}
