//每一个源文件是一个翻译单元
//凡是有名字的东西（函数，类，常量，变量，模板，命名空间）必然属于其中之一：外链接，内链接，无链接

#include "header.h"
#include <iostream>

extern unsigned short thatNum;    //extern在有多个翻译单元时非常重要，这个关键字可以把另一个翻译单元里的某个变量声明为本翻译单元里的一个同名全局变量
                                  //编译器不会为extern变量分配内存，因为在其他地方已经为它分配过内存
static bool printMe = false;      //static存储在静态存储区，生命周期为从申请到程序结束（和全局变量一样）

int main()
{
    unsigned short thisNum = 10;

    std::cout << thisNum << "! is equal to " << returnFactorial(thisNum) << "\n\n";       //外链接的意思是每个翻译单元都可以访问这个东西，前提是它知道有这么个东西存在 （用extern告诉编译器）
                                                                                          //普通的函数，变量，模板，命名空间默认都有外链接
    std::cout << thatNum << "! is equal to " << returnFactorial(thatNum) << "\n\n";

    std::cout << headerNum << "! is equal to " << returnFactorial(headerNum) << "\n\n";

    if (printMe)
    {
        std::cout << "哈哈\n\n";
    }

    return 0;
}

/*
在使用编译器建立程序时，他实际上是由3个步骤构成：
1. 执行预处理器指令                //例如把#include指令替换为相应的头文件里面的代码，总的效果就是头文件里面的代码就像一开始就在.cpp文件里似的
2. 把.cpp文件编译成.o文件              //源文件翻译成二进制文件
3. 把.o文件链接成一个可执行文件
*/

