//ʱ�䣺2019��6��3��10:33:06
//ΪScreen������������캯��

#include <string>

class Screen
{
public:
    Screen() = default;
    Screen(unsigned wd, unsigned ht) : width(wd), height(ht), contents(wd * ht, ' ') {}
    Screen(unsigned wd, unsigned ht, char c) : width(), height(ht), contents(wd * ht, c) {}

private:
    unsigned height = 0, width = 0;     //��Ļ�ĸ߶ȺͿ��
    unsigned cursor = 0;                //���ĵ�ǰλ��
    std::string contents;               //��Ļ������
};
