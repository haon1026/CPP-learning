//时间：2019年6月3日16:23:16
//定义Screen和Window_mgr,其中clear是Window_mgr的成员，是Screen的友元

#include <iostream>
#include <string>

class Window_mgr
{
public:
    void clear();
};

class Screen
{
public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
    friend void Window_mgr::clear();

private:
    unsigned cursor = 0;
    unsigned height = 0, width = 0;
    std::string contents;
};

void Window_mgr::clear()
{
    Screen myScreen(10, 20, 'X');
    std::cout << "清理之前myScreen的内容是：" << std::endl;
    std::cout << myScreen.contents << std::endl;
    myScreen.contents = "";
    std::cout << "清理之后myScreen的内容是：" << std::endl;
    std::cout << myScreen.contents << std::endl;
}

int main()
{
    Window_mgr w;
    w.clear();

    return 0;
}
