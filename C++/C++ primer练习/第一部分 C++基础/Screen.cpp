//时间：2019年6月3日13:08:01
//P246 编写Screen类 + 为Screen添加三种构造函数
//P249 为Screen类添加move,set和display函数

#include <iostream>
#include <string>

class Screen
{
public:
    //构造函数的三种形式：1，默认构造函数 2，接受高和宽的值，屏幕内容初始化为空白 3，接受高和宽的值，屏幕内容初始化为字符
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const {return contents[cursor];}    //获取当前光标所在位置的字符
    inline char get(unsigned, unsigned) const;     //获取指定位置光标的字符
    Screen &move(unsigned, unsigned);               //光标移动到指定位置
    Screen &set(char);                              //为当前光标所在位置更新新值
    Screen &set(unsigned, unsigned, char);          //为指定位置的光标更新新值
    Screen &display(std::ostream &);                //打印Screen的内容              //把这四个函数返回类型从Screen&修改为Screen结果会怎样

private:
    unsigned cursor = 0;
    unsigned height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

inline char Screen::get(unsigned r, unsigned c) const
{
    return contents[r * width + c];
}

inline Screen &Screen::move(unsigned r, unsigned c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen &Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline Screen &Screen::set(unsigned r, unsigned c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}

inline Screen &Screen::display(std::ostream &os)
{
    do_display(os);
    return *this;
}

int main()
{
    Screen myScreen(5, 5, 'X');

    std::cout << myScreen.get() << std::endl;

    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";

    std::cout << myScreen.get(4, 0) << std::endl;

    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
