//时间：2019年6月3日10:29:38
//编写一个名为Screen的类

#include <string>

class Screen
{
private:
    unsigned height = 0, width = 0;     //屏幕的高度和宽度
    unsigned cursor = 0;                //光标的当前位置
    std::string contents;               //屏幕的内容
};
