//ʱ�䣺2019��6��3��16:23:16
//����Screen��Window_mgr,����clear��Window_mgr�ĳ�Ա����Screen����Ԫ

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
    std::cout << "����֮ǰmyScreen�������ǣ�" << std::endl;
    std::cout << myScreen.contents << std::endl;
    myScreen.contents = "";
    std::cout << "����֮��myScreen�������ǣ�" << std::endl;
    std::cout << myScreen.contents << std::endl;
}

int main()
{
    Window_mgr w;
    w.clear();

    return 0;
}
