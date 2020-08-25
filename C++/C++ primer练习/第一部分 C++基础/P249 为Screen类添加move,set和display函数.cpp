//时间：2019年6月3日12:26:48
//为Screen类添加move,set和display函数

#include <iostream>
#include <string>

class Screen
{
public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    Screen &move(unsigned, unsigned);
    Screen &set(char);
    Screen &set(unsigned, unsigned, char);
    Screen &display(std::ostream &);

private:
    unsigned cursor = 0;
    unsigned height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

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
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
