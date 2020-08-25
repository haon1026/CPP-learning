//时间：2019年6月3日10:33:06
//为Screen类添加三个构造函数

#include <string>

class Screen
{
public:
    Screen() = default;
    Screen(unsigned wd, unsigned ht) : width(wd), height(ht), contents(wd * ht, ' ') {}
    Screen(unsigned wd, unsigned ht, char c) : width(), height(ht), contents(wd * ht, c) {}

private:
    unsigned height = 0, width = 0;     //屏幕的高度和宽度
    unsigned cursor = 0;                //光标的当前位置
    std::string contents;               //屏幕的内容
};
